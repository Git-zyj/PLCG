/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96554
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) 4611123068473966592LL);
                arr_9 [(_Bool)1] [i_1] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0 + 2])) && (((((/* implicit */_Bool) -4611123068473966568LL)) || (((/* implicit */_Bool) (short)12288))))));
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) 2006600017)) ? ((+(((/* implicit */int) arr_3 [6LL])))) : (((/* implicit */int) arr_5 [i_0])))))));
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */int) (unsigned short)18896)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))))) || (((/* implicit */_Bool) -7522185509053017907LL))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */long long int) ((/* implicit */int) (short)25026))) : (4611123068473966602LL))))))));
                    arr_13 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [1ULL] [i_0 + 1] [8ULL] [i_0 + 1])) ? (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (short)27706))))) > (4611123068473966592LL)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)183)), (arr_1 [i_0] [6ULL])))) ? (((/* implicit */int) ((_Bool) -4611123068473966560LL))) : (((/* implicit */int) arr_6 [i_0] [i_0]))))));
                }
            }
        } 
    } 
    var_16 = (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (_Bool)1)))))) > (min((((/* implicit */unsigned long long int) (short)-27715)), (3721318610351318836ULL)))))));
    var_17 = ((/* implicit */long long int) ((unsigned short) var_0));
    var_18 = ((/* implicit */long long int) var_11);
}
