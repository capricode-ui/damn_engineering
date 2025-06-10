var addTwoNumbers = function(l1, l2) {
    let dummy = new ListNode(-1);
    let curr = dummy;
    let carry = 0;

    let t1 = l1;
    let t2 = l2;

    while (t1 !== null || t2 !== null) {
        let sum = carry;
        if (t1 !== null) {
            sum += t1.val;
            t1 = t1.next;
        }
        if (t2 !== null) {
            sum += t2.val;
            t2 = t2.next;
        }

        carry = Math.floor(sum / 10);
        curr.next = new ListNode(sum % 10);
        curr = curr.next;
    }

    if (carry > 0) {
        curr.next = new ListNode(carry);
    }

    return dummy.next;
};