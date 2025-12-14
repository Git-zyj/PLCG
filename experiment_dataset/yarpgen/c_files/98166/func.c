/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98166
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
    var_16 = ((/* implicit */unsigned short) ((((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)100)))) - (((var_14) + (var_6))))) & (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((((/* implicit */int) max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned short) arr_5 [(_Bool)1]))))), (((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */int) arr_2 [i_1] [i_0])))))))));
                arr_6 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) var_12)))) & (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))), (min((arr_1 [(_Bool)1]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 549755813887LL)))))))));
                var_18 = max((((/* implicit */int) arr_0 [i_1])), (((((/* implicit */int) (short)-26126)) & (((((/* implicit */int) (unsigned short)18160)) % (((/* implicit */int) var_2)))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (14428318740357062024ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_9))))))), (((((4018425333352489591ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18160)))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_19 &= ((/* implicit */unsigned char) max((((arr_10 [i_0] [i_1]) % (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((arr_9 [i_3] [i_2] [i_1] [i_0]) & (((/* implicit */int) var_11))))), (var_3))))));
                            arr_15 [i_3] [i_2 + 1] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) << (((max((min((32768), (((/* implicit */int) (unsigned short)65523)))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)32766)), (arr_0 [i_0])))))) - (32754)))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)2003)) == (var_6)))) << (((((/* implicit */int) var_12)) - (65)))))) ? (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_1 [i_0]))) + (((/* implicit */long long int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) - (24760)))))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_9))))))))));
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_4 [i_1] [i_2 - 1] [i_3 + 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
