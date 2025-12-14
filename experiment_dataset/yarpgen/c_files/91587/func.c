/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91587
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 = min((((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)37))))) <= (-83153708483082678LL)))), (var_5));
                                arr_16 [i_0 + 2] [i_1] [i_1] [i_1] [(_Bool)1] [i_0 + 2] = min((((-83153708483082656LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)190))))), (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0 - 1])) - (((/* implicit */int) arr_13 [i_0 - 1]))))));
                            }
                        } 
                    } 
                    arr_17 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_10 [i_0 - 2] [i_0 - 1] [i_0 - 3]))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) var_8)), (var_4)))))) : (-83153708483082668LL)));
                    arr_18 [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) min((((/* implicit */long long int) 2720556327U)), (-1965048636560507400LL)))))));
                    arr_19 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)10284)) << (((var_3) - (14316153872673856070ULL))))), (((/* implicit */int) ((((/* implicit */_Bool) 1574410965U)) && (((/* implicit */_Bool) arr_8 [i_0] [i_0 + 3] [i_2])))))))), (min((3796049951735991404ULL), (((/* implicit */unsigned long long int) (signed char)-65))))));
                }
            } 
        } 
    } 
    var_11 -= ((/* implicit */long long int) min((min(((~(18446744073709551607ULL))), (((/* implicit */unsigned long long int) (unsigned char)117)))), (min((((/* implicit */unsigned long long int) (unsigned char)0)), (((unsigned long long int) (signed char)-1))))));
}
