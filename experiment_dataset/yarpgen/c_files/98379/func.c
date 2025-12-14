/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98379
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? ((~(var_17))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2147483628))))) : (((/* implicit */int) (unsigned char)174)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_0 [i_4]) | (((((/* implicit */_Bool) 87831437)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65527)))))))));
                            var_20 &= ((/* implicit */unsigned long long int) var_16);
                            arr_13 [i_0] [i_1] [i_2] = ((/* implicit */int) (!(((((/* implicit */int) arr_10 [13] [i_4])) == (((((/* implicit */int) arr_10 [i_1] [i_2])) & (((/* implicit */int) (unsigned short)22))))))));
                            var_21 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22))) >= (4100667238864941407ULL))) ? (((/* implicit */unsigned long long int) var_14)) : (var_17))) << (((((/* implicit */int) max(((unsigned short)9), ((unsigned short)65492)))) - (65452)))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (+(arr_6 [i_2])))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_12)))))))))))));
                        }
                        for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) (unsigned short)22);
                            var_24 = (~(((/* implicit */int) (unsigned short)50444)));
                        }
                        var_25 -= ((/* implicit */unsigned long long int) max(((~(arr_16 [i_0] [i_0] [i_2] [i_2] [i_2]))), (((var_2) | (((/* implicit */int) var_13))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) var_6);
                            var_27 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)197))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                        {
                            var_28 -= ((/* implicit */short) ((((/* implicit */_Bool) 15328976092449661947ULL)) ? (-170282251) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_7]))));
                            var_29 = ((/* implicit */int) (unsigned short)26333);
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */int) var_8)) == (var_2))))));
                        }
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned char) (-((((!(((/* implicit */_Bool) var_15)))) ? ((+(((/* implicit */int) (short)-30228)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [(short)15] [i_0])))))))));
    }
    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        var_32 = ((/* implicit */unsigned short) arr_2 [i_8] [i_8]);
        var_33 -= ((/* implicit */unsigned char) var_6);
        arr_24 [i_8] = (-(((/* implicit */int) (unsigned short)15083)));
    }
    var_34 = ((/* implicit */int) (unsigned short)7503);
}
