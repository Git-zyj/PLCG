/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96796
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
    var_12 += ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max((407326027), (-407326001))))))));
    var_13 = ((/* implicit */unsigned char) var_10);
    var_14 = ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_11))))))) + (((/* implicit */int) (unsigned short)21074)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) max((((2134452624) ^ (((/* implicit */int) arr_3 [i_0] [i_2])))), (((/* implicit */int) arr_2 [i_1 + 2]))))) == (var_7)));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((-1457016023942281853LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        arr_10 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */int) (unsigned char)14);
                        arr_11 [i_0] [i_3] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 2]))) : (var_11)));
                        arr_12 [i_0] [i_1] = ((/* implicit */_Bool) (-(2251799813685232ULL)));
                    }
                    for (unsigned char i_4 = 3; i_4 < 13; i_4 += 4) 
                    {
                        arr_15 [i_1] [i_1] = ((/* implicit */short) arr_3 [(_Bool)1] [(_Bool)1]);
                        arr_16 [i_1] = ((/* implicit */unsigned char) arr_13 [i_0]);
                    }
                }
            } 
        } 
    } 
}
