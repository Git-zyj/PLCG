/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58255
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) var_9)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) min((2147483647), (2147483647)));
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (unsigned short)65535))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (min((12411500103897880342ULL), (412129715734796702ULL)))));
            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((2118196853), (((/* implicit */int) (short)18560)))))));
            var_20 |= ((/* implicit */short) min((((/* implicit */unsigned char) ((12223098075541914ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)23)) & (((/* implicit */int) (unsigned char)20)))))))), ((unsigned char)25)));
        }
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_10 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)70);
            arr_11 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3793))) == (min((((/* implicit */unsigned long long int) (unsigned short)32235)), (6035243969811671254ULL)))));
            arr_12 [i_0] [i_0] [i_0] = min((((/* implicit */unsigned long long int) (unsigned char)236)), (18446744073709551603ULL));
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) -7434650526620354602LL))));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)233)) + (((/* implicit */int) (_Bool)1))));
        }
        arr_13 [i_0] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
        var_23 = ((/* implicit */short) 9223372036854775793LL);
    }
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    {
                        arr_22 [i_4] [i_4] [(unsigned short)1] [(unsigned short)1] [i_4] = ((/* implicit */unsigned char) min((((15ULL) << (((8882187051195160527LL) - (8882187051195160465LL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7434650526620354601LL)))))));
                        var_24 = ((/* implicit */unsigned short) 15ULL);
                    }
                } 
            } 
        } 
        var_25 ^= min((((/* implicit */unsigned long long int) ((18446744073709551594ULL) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)130)))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2191107197112398159LL)) || (((/* implicit */_Bool) (unsigned char)250))))), (((18434520975634009702ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))))))));
        var_26 = (!(((/* implicit */_Bool) 2118196841)));
    }
}
