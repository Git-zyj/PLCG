/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77821
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
    var_15 = ((/* implicit */short) ((_Bool) ((min((((/* implicit */unsigned long long int) (signed char)102)), (13268849254829294995ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
    var_16 = ((/* implicit */unsigned char) var_12);
    var_17 = var_9;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */signed char) ((((long long int) (_Bool)1)) == (((/* implicit */long long int) ((/* implicit */int) min(((signed char)0), (((/* implicit */signed char) (_Bool)1))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    arr_11 [i_0] [i_2] = ((/* implicit */unsigned short) ((short) (_Bool)1));
                    arr_12 [i_0] [15U] [i_2] = ((/* implicit */short) (-(((/* implicit */int) (short)28606))));
                }
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    arr_15 [i_0] [i_1] [i_3] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned long long int) (short)18745));
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        arr_20 [i_0] [i_1] [i_1] [i_4] |= ((/* implicit */signed char) ((2596854269U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
                        arr_21 [i_0] [i_1] = ((/* implicit */int) (_Bool)0);
                        arr_22 [19LL] [i_1] [(signed char)4] [6U] = ((/* implicit */signed char) ((_Bool) ((unsigned long long int) (unsigned char)249)));
                        arr_23 [(_Bool)1] = ((/* implicit */short) min(((((-(16468819964064512194ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)0)))))), (((/* implicit */unsigned long long int) ((max(((_Bool)1), ((_Bool)1))) || (((/* implicit */_Bool) ((0) >> (((((/* implicit */int) (short)7908)) - (7898)))))))))));
                    }
                    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        arr_26 [i_5] = ((/* implicit */signed char) ((((_Bool) ((unsigned short) 1977924109645039421ULL))) ? ((+(((/* implicit */int) ((signed char) (short)-25947))))) : ((((+(((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) ((signed char) (_Bool)1)))))));
                        arr_27 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((unsigned char) 1977924109645039431ULL)));
                        arr_28 [i_5] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (unsigned char)236))) ? (((unsigned long long int) ((signed char) (_Bool)1))) : (max((((/* implicit */unsigned long long int) 0U)), (16468819964064512194ULL)))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_32 [(_Bool)1] [i_1] [i_1] [i_5] [(_Bool)1] |= ((/* implicit */int) ((((/* implicit */int) max(((short)6125), (((/* implicit */short) (signed char)88))))) == (((/* implicit */int) ((unsigned char) -3812800270440724058LL)))));
                            arr_33 [(_Bool)1] [i_1] [(_Bool)1] [i_0] [18ULL] = ((/* implicit */int) ((unsigned long long int) -1645393344));
                            arr_34 [i_0] [i_1] [i_3] [i_5] [(short)9] [i_1] [i_5] = ((/* implicit */short) max((1131549187U), (((/* implicit */unsigned int) ((signed char) ((int) (short)18748))))));
                            arr_35 [(short)18] [4] [(unsigned short)16] [i_5] [i_5] [i_6] = ((/* implicit */long long int) min((max((1977924109645039422ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                }
            }
        } 
    } 
}
