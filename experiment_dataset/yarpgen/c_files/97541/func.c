/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97541
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)6)) ? (8066318334053480922ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1 - 2] [i_1] [i_0])))))) ? (((((/* implicit */int) (unsigned char)217)) << (((((/* implicit */int) (unsigned char)34)) - (14))))) : (((/* implicit */int) max((arr_6 [i_1] [i_1 - 1] [24ULL] [i_0]), ((unsigned char)222))))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = (((~(arr_11 [i_1 + 1] [i_1 + 1] [i_0] [i_3]))) + (((((/* implicit */_Bool) arr_11 [i_1 - 2] [i_1] [i_0] [i_3])) ? (arr_8 [i_1 + 2] [i_1 - 4] [i_2] [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))))));
                                var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 2] [i_1] [i_0]))) * (max((8066318334053480910ULL), (18014398509481976ULL))))))));
                                var_16 = ((/* implicit */unsigned char) (-(2502886666862312037ULL)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    arr_16 [i_0] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned char)2)) ? ((((~(6285846968064400614ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))))) : ((-(((((/* implicit */_Bool) (unsigned char)245)) ? (14215828168182228291ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                    arr_17 [i_0] [i_0] = arr_7 [i_0] [i_0] [i_1] [i_5];
                }
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13ULL)) ? (((((/* implicit */_Bool) 10380425739656070669ULL)) ? (((538181533994836879ULL) | (0ULL))) : (2295588463195478126ULL))) : (8066318334053480946ULL)));
                            var_18 = max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 8066318334053480922ULL)))))))), (14054792950894143895ULL));
                            arr_23 [i_0] [19ULL] [19ULL] = min((((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0]))) : (1902045480433953217ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_0])) * (((/* implicit */int) (unsigned char)34))))));
                            var_19 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 1116366417107035959ULL)))) ? (((arr_11 [i_1 - 4] [i_1 - 4] [i_0] [i_6 + 3]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)27))))))) : (min((((910855411484083455ULL) >> (((/* implicit */int) arr_21 [i_0])))), (2295588463195478119ULL)))))) : (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 1116366417107035959ULL)))) ? (((arr_11 [i_1 - 4] [i_1 - 4] [i_0] [i_6 + 3]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)27))))))) : (min((((910855411484083455ULL) >> (((((/* implicit */int) arr_21 [i_0])) - (113))))), (2295588463195478119ULL))))));
                            arr_24 [i_0] [i_6] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) 16151155610514073489ULL);
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) 15943857406847239578ULL)) ? (17908562539714714736ULL) : (arr_8 [i_0] [i_0] [i_0] [14ULL] [4ULL]))))), (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_1])) ? ((~(18446744073709551614ULL))) : (((((/* implicit */_Bool) (unsigned char)65)) ? (18446744073692774400ULL) : (arr_13 [i_0] [i_1])))))));
            }
        } 
    } 
    var_21 = var_0;
}
