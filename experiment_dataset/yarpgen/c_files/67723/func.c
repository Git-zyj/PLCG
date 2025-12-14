/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67723
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
    for (short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))) & (((/* implicit */int) min(((short)1536), ((short)13197))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21246)) ? (((/* implicit */int) (short)4088)) : (((/* implicit */int) (short)16618))))) ? (((((/* implicit */_Bool) (short)-5689)) ? (((/* implicit */int) (short)-5676)) : (((/* implicit */int) (short)-12635)))) : ((~(((/* implicit */int) (short)-18983)))))) : ((-(((((/* implicit */_Bool) (short)-15528)) ? (((/* implicit */int) (short)-12631)) : (((/* implicit */int) (short)0))))))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)-32761), ((short)28447)))) ? (((((/* implicit */_Bool) (short)-5695)) ? (((/* implicit */int) (short)-22938)) : (((/* implicit */int) (short)19051)))) : (((((/* implicit */_Bool) (short)-15531)) ? (((/* implicit */int) (short)12634)) : (((/* implicit */int) (short)16168))))));
                }
                var_21 ^= ((/* implicit */short) ((((/* implicit */int) ((short) (short)1593))) != ((~(((/* implicit */int) (short)-5693))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    arr_18 [i_3] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-25615)) ? (((/* implicit */int) (short)-20655)) : (((((/* implicit */int) (short)-23318)) - (((/* implicit */int) (short)29086))))));
                    arr_19 [i_4] [i_5] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-17518)) == (((/* implicit */int) (short)0)))) ? (((/* implicit */int) (short)-8448)) : (((/* implicit */int) ((((/* implicit */int) (short)-20655)) >= (((/* implicit */int) (short)8064)))))))) ? (((/* implicit */int) min(((short)-1), ((short)32763)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10366)) ? (((/* implicit */int) (short)20655)) : (((/* implicit */int) (short)-6994))))) ? (((((/* implicit */_Bool) (short)-29009)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)19257)))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)-25449)) : (((/* implicit */int) (short)31586))))))));
                }
            } 
        } 
    } 
}
