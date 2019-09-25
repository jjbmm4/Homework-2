void queueMoveToRear(queue<string>& x) 

{ 

    string temp; 

    temp = x.front(); 

    x.pop(); 

    x.push(temp); 

    return; 

} 