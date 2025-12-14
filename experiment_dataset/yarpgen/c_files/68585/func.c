/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68585
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
    var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_12)) ? (var_15) : (var_9))) : (((int) (signed char)127)))), (((((/* implicit */int) var_5)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))));
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_9)), (((4294967295U) * (2147483647U)))));
    var_21 ^= ((((/* implicit */_Bool) var_15)) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) max((var_4), (((/* implicit */signed char) (!(((/* implicit */_Bool) -703101620772757044LL)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3967205352707746263LL)) ? (min((((/* implicit */unsigned int) (signed char)-105)), (var_17))) : (((((var_17) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107)))))));
        var_23 -= ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) / ((+(var_1)))));
        var_24 = ((/* implicit */signed char) var_18);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                {
                    var_25 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_16)))) ? (var_16) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2147483667U)) | (7349545418827864959LL)))))))));
                    arr_9 [(signed char)3] [(signed char)3] [(signed char)3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483648U)) && ((_Bool)1)));
                }
                for (int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) var_13))))))));
                    arr_12 [i_0] [i_1] [i_2] [i_4] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_17))))));
                }
                var_27 = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2]);
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    var_28 = ((/* implicit */long long int) ((363644744) / (((/* implicit */int) (signed char)(-127 - 1)))));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)82)) - ((~(((/* implicit */int) min(((unsigned char)104), ((unsigned char)183))))))));
                    var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) arr_13 [(unsigned short)5] [i_1] [i_2] [i_5])) ? (2253644714U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
                }
                var_31 = ((/* implicit */int) var_10);
            }
            var_32 = ((/* implicit */unsigned char) ((((14045826946295664644ULL) / (((/* implicit */unsigned long long int) 3974680171U)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11251515662518809061ULL)) || (((/* implicit */_Bool) 2147483659U))))))));
        }
    }
}
