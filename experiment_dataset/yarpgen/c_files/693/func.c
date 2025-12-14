/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/693
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) max((max((-5154428389123958675LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) -1278248934)) < (5U)))))), (((/* implicit */long long int) ((var_2) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (1278248943) : (((/* implicit */int) var_0)))))))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_5 [i_1]));
                    arr_9 [i_2] = ((/* implicit */unsigned int) max((4841895088005358767LL), (((/* implicit */long long int) ((unsigned short) 1706625275)))));
                    var_14 = ((/* implicit */unsigned short) 1543312531);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_4] [(unsigned char)6] [(unsigned char)6] [i_1 + 2] [i_0] = ((/* implicit */_Bool) arr_7 [i_4] [i_3] [i_1]);
                                var_15 = ((/* implicit */unsigned short) max((((/* implicit */int) var_5)), (max((max((arr_10 [i_2]), (arr_1 [i_2] [i_2]))), (((((/* implicit */int) arr_3 [i_4])) - (-2147483637)))))));
                                arr_18 [i_2 + 3] [i_2 + 3] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((var_7) | (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3])))))))));
                                arr_19 [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) max(((unsigned short)49152), (((/* implicit */unsigned short) (signed char)103))))), (max((var_2), (arr_5 [i_0]))))), (((/* implicit */long long int) ((((-2027930473) + (2147483647))) << (((/* implicit */int) (signed char)0)))))));
                                var_16 = ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) * (arr_0 [i_4]))))))), (((((/* implicit */long long int) var_6)) - (max((4841895088005358754LL), (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_1] [i_3]))))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) max(((+(((/* implicit */int) var_10)))), (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) max((184764505U), (((/* implicit */unsigned int) -1278248955))))) : (var_12)))) ? (((((((/* implicit */_Bool) var_7)) ? (1543312516) : (12669947))) >> (((((/* implicit */int) var_10)) - (215))))) : (((((/* implicit */int) max(((unsigned short)50878), (((/* implicit */unsigned short) (short)-1190))))) ^ (((int) var_3))))));
}
