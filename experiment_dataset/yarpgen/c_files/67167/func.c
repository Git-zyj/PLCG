/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67167
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_19 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) || (((/* implicit */_Bool) arr_2 [i_0])))) ? (((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) || (((/* implicit */_Bool) 18446744073709551613ULL)))) ? (var_16) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)31307)) ? (2856336614U) : (((/* implicit */unsigned int) -723471881))))))) : (((/* implicit */unsigned long long int) ((1438630682U) * (((/* implicit */unsigned int) 1048576)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((723471881) < (((/* implicit */int) (unsigned char)255))))));
                            var_21 = ((/* implicit */unsigned char) (((_Bool)1) ? (-6416195981888628032LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_7 [(unsigned char)5] [i_2 + 3] [i_1] [i_0]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) max((max((2856336614U), (((arr_6 [i_1] [i_1] [i_0]) * (2856336601U))))), (min((((/* implicit */unsigned int) (unsigned char)255)), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (arr_9 [i_0])))))));
                var_24 -= ((/* implicit */_Bool) ((unsigned char) 1048566));
                var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0]))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) ((int) 56));
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_0))));
}
