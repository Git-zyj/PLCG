/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58015
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) var_0);
                            var_16 = ((/* implicit */int) min((var_16), (((int) ((arr_0 [i_1]) == (0U))))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((arr_5 [(unsigned char)7] [9ULL]), (12751071673244207993ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [(_Bool)1])), (-822060546))))))) ? (1073741816U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2])))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))) >= (12751071673244207984ULL)))), (((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)27)) * (((/* implicit */int) (unsigned short)1008))))) * (max((-5675242186744933655LL), (((/* implicit */long long int) 2485886189U))))))));
                var_19 = ((/* implicit */int) var_11);
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) (unsigned char)228)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)193))) : (arr_5 [i_0] [i_0]))))))))));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) 2767958775U))));
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned int) var_4);
}
