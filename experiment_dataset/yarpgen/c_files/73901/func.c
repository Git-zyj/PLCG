/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73901
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
    var_15 += ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (min((3504926880728171284ULL), (((/* implicit */unsigned long long int) 1133854510)))))), (min((arr_3 [i_1 + 1] [i_1 - 2]), (arr_3 [i_1 + 1] [i_1 - 2])))));
                arr_5 [i_1 - 2] [i_0] = ((/* implicit */unsigned long long int) ((max(((-(((/* implicit */int) (signed char)67)))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)29)) || (((/* implicit */_Bool) (unsigned char)193))))))) / (((/* implicit */int) (unsigned short)53825))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (min((min((((/* implicit */unsigned long long int) arr_7 [i_1])), (max((3504926880728171284ULL), (((/* implicit */unsigned long long int) -1294920940460614836LL)))))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_1 [i_1 - 2])) << (((arr_6 [i_0] [i_0] [i_2] [i_0]) - (1209220020)))))))))));
                            var_17 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)9080)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)26))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)2380))))) ? ((~(18232552810804543087ULL))) : (((/* implicit */unsigned long long int) 2147483647))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 += ((/* implicit */unsigned char) var_5);
}
