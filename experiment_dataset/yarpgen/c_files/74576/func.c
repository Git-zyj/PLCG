/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74576
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
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((long long int) var_9)), (((/* implicit */long long int) (+(var_0))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (min((var_10), (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [10U] [17] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) (short)9894))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(unsigned short)1] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (unsigned short)5781))));
                        var_20 |= ((/* implicit */unsigned short) (-(153426663U)));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (arr_3 [i_3 + 4] [i_1 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    }
                    for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_1 - 3])) == (((((/* implicit */int) arr_12 [i_0] [i_4] [i_2] [i_4])) ^ (((/* implicit */int) (unsigned char)85))))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_1 + 1] [(signed char)7])) ? (((/* implicit */int) arr_14 [i_2] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_14 [i_1 + 2] [i_1 + 2] [i_0]))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) arr_14 [i_0] [i_1] [20])))) : (((/* implicit */int) var_4))));
                    }
                    for (int i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        var_25 = ((/* implicit */long long int) ((arr_17 [i_5 - 1] [i_1 + 2] [i_0]) ? (((/* implicit */int) arr_17 [i_2] [i_1] [i_2])) : (((/* implicit */int) arr_17 [5LL] [5LL] [i_5 + 1]))));
                        var_26 -= ((/* implicit */unsigned short) (~((-9223372036854775807LL - 1LL))));
                    }
                    arr_19 [i_1] [(unsigned char)2] [1LL] [i_1 + 2] = ((/* implicit */unsigned short) ((arr_17 [i_0] [i_1 - 1] [i_2]) || (arr_17 [i_2] [i_1] [i_0])));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 2; i_6 < 20; i_6 += 4) /* same iter space */
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_2] [i_6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(short)15] [(short)15])) ? (var_12) : (var_12)))) ? (-8290371132909996308LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1 - 2])))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [i_6 + 3] [i_1 + 2] [i_1 - 3]))) * (var_12)));
                    }
                    for (long long int i_7 = 2; i_7 < 20; i_7 += 4) /* same iter space */
                    {
                        arr_26 [i_0] [i_1 + 2] [i_2] [i_2] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_7 + 1] [i_1 + 1] [(unsigned short)20]))));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_28 = ((/* implicit */long long int) arr_11 [17U] [17U] [i_0]);
                            var_29 = ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [(unsigned short)4])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_1 + 2] [i_0] [i_7 - 2]))));
                            arr_31 [i_0] [i_1] [i_0] [i_7] [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_1 - 1] [i_7 - 1] [i_7]))));
                            var_30 = ((/* implicit */unsigned int) var_7);
                        }
                    }
                }
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    arr_34 [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_1] [i_1 - 1] [i_1 - 3] [i_1 - 3])) ? (((/* implicit */int) arr_10 [i_1] [i_1 - 3] [i_1 - 3] [i_1 - 1])) : (((/* implicit */int) arr_10 [i_1] [i_1 - 3] [i_1 - 2] [i_1 - 1])))) + (((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_1 + 2] [i_1 - 1]))));
                    var_31 = ((/* implicit */long long int) var_16);
                    arr_35 [12] [i_9] = ((/* implicit */long long int) min((((/* implicit */int) ((arr_9 [i_1 + 1] [i_1 - 3]) == (((/* implicit */long long int) ((/* implicit */int) var_13)))))), ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)56437))))))));
                }
                for (unsigned char i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    arr_38 [i_0] [i_0] = var_5;
                    var_32 = ((/* implicit */unsigned char) var_7);
                }
                var_33 = ((/* implicit */short) (+(((/* implicit */int) ((min((((/* implicit */long long int) (short)(-32767 - 1))), (-7062432332385399469LL))) == (((/* implicit */long long int) ((/* implicit */int) min((arr_18 [(unsigned short)3] [15LL] [i_0] [i_1]), (((/* implicit */short) (unsigned char)255)))))))))));
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-((+(((/* implicit */int) var_7))))))), (var_15)));
    var_35 = ((/* implicit */short) min((max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))))), (var_2))), (((/* implicit */signed char) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_13)))))));
    var_36 = ((/* implicit */int) min((min((((/* implicit */unsigned int) (unsigned short)9099)), (4192041877U))), (1419246714U)));
}
