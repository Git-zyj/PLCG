/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5550
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
    var_15 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    arr_11 [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) var_6);
                    arr_12 [i_0] [1U] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_1 + 4] [i_1] [i_1 + 2])), (var_3))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_16 = (+(1391571973));
                                arr_19 [i_0] [i_1] [2] [i_3] [i_4] = var_14;
                                var_17 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((unsigned char) var_7))) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (var_7))))), ((((+(var_7))) + ((+(-1391571973)))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    var_18 = ((/* implicit */short) var_2);
                    var_19 = ((/* implicit */short) max((((unsigned long long int) arr_9 [i_5] [2U] [i_0])), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
                    var_20 += (-(((/* implicit */int) var_10)));
                    var_21 = ((/* implicit */int) var_3);
                    var_22 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)62350)) : (-1391571975))), (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)2883))))))))));
                }
                var_23 = (((((((~(((/* implicit */int) var_5)))) % (((/* implicit */int) var_5)))) + (2147483647))) << (((max((((/* implicit */int) (unsigned short)21108)), (-1391571973))) - (21108))));
                /* LoopSeq 2 */
                for (int i_6 = 4; i_6 < 11; i_6 += 1) /* same iter space */
                {
                    var_24 = max(((+(((int) var_11)))), (((/* implicit */int) ((13) <= (((/* implicit */int) (unsigned short)17616))))));
                    var_25 |= ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) arr_22 [9] [i_6] [(_Bool)1] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))), (((int) arr_6 [3] [i_1 + 3]))))));
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((var_6) && (((/* implicit */_Bool) (((~(-1391571974))) - (((((/* implicit */int) var_1)) / (((/* implicit */int) arr_15 [(unsigned short)10]))))))))))));
                    arr_25 [i_0] [i_1 + 3] [i_6 + 2] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (-(max((((/* implicit */int) var_4)), (var_11))))));
                }
                for (int i_7 = 4; i_7 < 11; i_7 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) (~(50331648)))))));
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((unsigned long long int) var_4))))) ? (((((((((((/* implicit */_Bool) 1339727446)) ? ((-2147483647 - 1)) : (arr_0 [i_0] [i_1]))) + (2147483647))) + (2147483647))) << (((((((/* implicit */int) (short)-14584)) + (14588))) - (4))))) : (((/* implicit */int) (unsigned char)191))));
                    arr_29 [i_0] [i_0] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                }
                arr_30 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (max((var_14), (((/* implicit */unsigned long long int) var_4)))) : (var_13)));
            }
        } 
    } 
}
