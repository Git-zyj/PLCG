/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8390
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_11 ^= ((/* implicit */unsigned int) arr_1 [5U]);
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        arr_12 [i_3] [i_2] [i_3] = ((/* implicit */signed char) arr_0 [i_3]);
                        arr_13 [i_3] [i_1] [14] [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) (short)18712)) ? (arr_10 [(unsigned char)1] [i_3 + 1] [i_0] [i_3]) : (((/* implicit */unsigned long long int) arr_11 [i_3 - 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-81)) > (((/* implicit */int) (short)18712)))))));
                    }
                    arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) max((((int) arr_2 [i_0])), (((/* implicit */int) arr_8 [i_0] [i_1]))));
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (8865251516305434582LL))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        for (signed char i_5 = 1; i_5 < 12; i_5 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) 1403422386);
                                var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_6)), (max((arr_9 [i_2] [i_5 + 4] [(short)7]), (arr_9 [i_2] [i_5 + 3] [i_5])))));
                                var_15 = ((/* implicit */unsigned long long int) ((short) var_9));
                                var_16 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) ((short) arr_10 [i_4] [6LL] [6LL] [i_4]))))))) == (((7734889670421082186ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_17 += ((/* implicit */unsigned short) 1073741824U);
                    var_18 = var_7;
                    arr_21 [i_6] [i_0] [7U] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_6)), (arr_10 [i_0] [8] [i_0] [i_6])));
                }
                var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_5 [i_0])) ? (-994418807) : (arr_19 [i_0]))), ((+(((/* implicit */int) (unsigned char)237))))));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 15; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) min(((short)-12716), (((/* implicit */short) (_Bool)1))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((unsigned char) ((((/* implicit */int) arr_22 [i_7] [i_7 - 2] [i_7 + 1] [i_0])) < (((/* implicit */int) ((_Bool) (_Bool)1))))))));
                            arr_27 [i_7] = (((~(((/* implicit */int) arr_22 [i_7] [i_8] [i_8] [i_7])))) < (((/* implicit */int) (!(((/* implicit */_Bool) 2545559295779550118ULL))))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)0))))), (var_2))), (((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_7] [6ULL] [i_0]))))))))));
                        }
                    } 
                } 
                arr_28 [i_1] [i_1] [i_1] = ((/* implicit */short) arr_6 [(_Bool)1] [i_1]);
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((_Bool) 994418810));
    var_24 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (-1866163868)));
}
