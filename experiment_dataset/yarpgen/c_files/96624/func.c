/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96624
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] [(short)14] = ((/* implicit */int) var_16);
                    var_18 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (arr_0 [i_0 + 3])))) - (((((/* implicit */unsigned long long int) arr_3 [18])) / (var_10)))))));
                    arr_12 [i_0] = ((/* implicit */signed char) ((int) max((arr_4 [i_2] [i_2 - 1] [i_2 - 1]), (arr_4 [i_2] [i_2] [i_2 - 1]))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */int) 7361716286944313049LL);
                        arr_16 [i_0] [i_0 - 1] [i_0 - 1] [i_2] [(unsigned char)10] = ((/* implicit */signed char) ((int) -7361716286944313047LL));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0 + 3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0 + 2] [i_1] [i_1] [i_1 + 1])) ? (((((-7361716286944313047LL) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)21)) - (21))))) : (((((/* implicit */_Bool) (unsigned char)136)) ? (7361716286944313068LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                            arr_22 [i_2] [i_2] = ((/* implicit */signed char) (-(-1686246808)));
                        }
                        for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            arr_25 [i_2] [i_1] [i_2] [i_2] [i_1] [i_0] = arr_1 [i_0 + 2];
                            arr_26 [i_0] [i_0] [i_0] [i_2] [i_5] = ((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) (short)12173)) ? (((/* implicit */int) arr_17 [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3]))))))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((((long long int) min((((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_2])), (arr_4 [i_0] [i_0] [i_2])))), (((/* implicit */long long int) min(((short)-24891), (((/* implicit */short) arr_13 [i_2 + 1] [i_0] [i_2 + 1] [i_1 + 1] [i_0 + 2] [i_0])))))));
                            var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (short)-32767))))) ? (((((/* implicit */int) (signed char)-8)) - (((/* implicit */int) arr_17 [i_5])))) : (((/* implicit */int) arr_4 [i_1] [i_2] [i_1]))))));
                            var_21 += ((/* implicit */short) var_0);
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_6] [i_2 + 2] [i_1 + 2])) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */int) var_8)) << (((((((/* implicit */int) arr_29 [i_2] [i_2] [i_0] [i_0])) + (25404))) - (18)))))));
                        var_23 = ((/* implicit */short) (+(511LL)));
                        var_24 += ((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2]))));
                        arr_31 [i_0] [i_1] [i_2] [i_2] [i_6] [i_6] = ((((/* implicit */int) arr_13 [19] [i_1] [i_1] [i_1] [i_2] [i_6])) << (((var_17) + (35503383))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 1; i_7 < 21; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            for (int i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                {
                    arr_42 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) -5469385040346293846LL))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_37 [i_7] [i_8] [i_7 - 1]))))) ? ((-(((/* implicit */int) arr_37 [i_7 + 1] [i_7 - 1] [i_7 + 1])))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((short) -851261803525856782LL))), ((unsigned short)5862))))));
                    var_25 = ((/* implicit */short) -7361716286944313041LL);
                    var_26 = ((/* implicit */long long int) (((-(((/* implicit */int) min((((/* implicit */short) arr_34 [(unsigned short)22] [i_8])), ((short)242)))))) << (((var_15) ? (((((/* implicit */int) arr_38 [i_7] [i_8] [i_7])) - (((/* implicit */int) var_13)))) : (((((/* implicit */int) var_6)) << (((arr_39 [i_7] [(short)22] [i_7] [(_Bool)1]) - (15177794648873552648ULL)))))))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2091350337047660030LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) : (7361716286944313047LL)));
                }
            } 
        } 
    } 
}
