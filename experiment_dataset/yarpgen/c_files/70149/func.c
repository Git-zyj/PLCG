/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70149
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) ((_Bool) -1713761782074816717LL));
                arr_6 [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_14)))) >> (((((/* implicit */int) (signed char)51)) - (39)))));
                arr_7 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((int) 1713761782074816716LL)))))));
            }
        } 
    } 
    var_16 = (-(((/* implicit */int) (short)30070)));
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (signed char)109);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_9 [(short)0])), (min((((unsigned long long int) -1713761782074816716LL)), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_2] [i_3] [i_4] [i_5] [i_2] [i_2])) + (((/* implicit */int) var_0)))))))));
                                arr_23 [i_2] = ((/* implicit */unsigned short) (-(max((((/* implicit */int) (unsigned short)8881)), (var_2)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((short) var_0));
}
