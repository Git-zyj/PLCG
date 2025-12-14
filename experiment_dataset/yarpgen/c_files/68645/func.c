/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68645
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5285))) : (11850304916171497524ULL))))))) % (((/* implicit */int) (((-(var_13))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))))))));
    var_15 &= ((/* implicit */unsigned short) var_3);
    var_16 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2234308077786597967LL)), (11850304916171497524ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85))) > (4648310531071055456ULL))))) : (((unsigned long long int) 1228222193)))));
    var_17 = ((((/* implicit */_Bool) 13798433542638496143ULL)) && (((/* implicit */_Bool) 17591112302592LL)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1] [i_1]))))) ? ((-(((/* implicit */int) (unsigned char)167)))) : ((-(((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [13ULL] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) ((((var_13) + (9223372036854775807LL))) << ((((~(2236677976U))) - (2058289319U)))));
                            var_18 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_2])) : (var_7))) + (2147483647))) << (((min((((/* implicit */unsigned int) (short)5285)), (2058289320U))) - (5285U)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
