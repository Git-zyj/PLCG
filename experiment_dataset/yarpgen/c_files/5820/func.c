/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5820
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
    var_14 += ((((/* implicit */int) (short)3630)) >= (((/* implicit */int) ((short) max(((unsigned short)16680), (((/* implicit */unsigned short) (short)3623)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_15 -= ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) 10487109632182959931ULL);
            var_16 = ((/* implicit */signed char) (unsigned short)32803);
            arr_8 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_0] [i_0] [14])) * (((/* implicit */int) (short)7214)))) / (((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_1 - 1] [i_2] [i_3] [11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_15 [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) (short)-7202)) >= (((/* implicit */int) (unsigned char)243))))) : (((/* implicit */int) (short)-7201))));
                            arr_21 [i_0] [i_1] [(unsigned short)6] [i_2 + 1] [i_3] [i_0] [i_3] = ((/* implicit */signed char) (+(var_2)));
                        }
                    } 
                } 
                var_17 *= ((/* implicit */signed char) arr_19 [(signed char)14] [i_0] [i_1] [i_1] [i_1 + 1] [(_Bool)1] [i_2 + 1]);
                /* LoopSeq 1 */
                for (int i_5 = 3; i_5 < 15; i_5 += 3) 
                {
                    arr_25 [i_0] [i_0] [i_2 + 1] [i_5] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_10 [i_5] [(short)3] [i_0] [i_0])) ? (((/* implicit */int) (short)7199)) : (((/* implicit */int) (_Bool)1)))));
                    var_18 = ((/* implicit */_Bool) var_1);
                    arr_26 [(unsigned short)6] [i_2] |= ((/* implicit */long long int) arr_4 [i_0] [14LL] [(_Bool)1]);
                }
                arr_27 [(signed char)17] [i_1] [i_0] = ((/* implicit */signed char) ((long long int) var_10));
            }
        }
        arr_28 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */int) (_Bool)1)), (-1293523836))) : (((((/* implicit */_Bool) 1629076649106452775LL)) ? (1602898351) : (((/* implicit */int) (_Bool)1))))));
    }
    var_19 = var_3;
}
