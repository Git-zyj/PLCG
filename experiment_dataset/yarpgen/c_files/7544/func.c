/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7544
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_10 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_6)), (((((((/* implicit */_Bool) -566834739)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) : (min((14960532696176908305ULL), (((/* implicit */unsigned long long int) var_7))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((max((min((1304368259), (((/* implicit */int) var_9)))), (((((/* implicit */int) arr_5 [i_0])) ^ (((/* implicit */int) arr_5 [i_0])))))) - (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 420889787)) && (((/* implicit */_Bool) 12931232257957243258ULL))))))));
            arr_7 [i_1] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))), (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))), (max((284692482), (((/* implicit */int) (short)-19831))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_4] [2] [(_Bool)1] [10ULL] [i_3] [3ULL] = ((/* implicit */signed char) (+(-284692483)));
                            var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (((_Bool)0) ? (((/* implicit */unsigned long long int) -2514423745486691331LL)) : (14960532696176908305ULL))))));
                            var_12 = (+(arr_3 [i_1] [i_1] [i_2]));
                            var_13 = ((((/* implicit */_Bool) -420889788)) ? (1815306072U) : (3792529068U));
                            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_4] [i_3] [i_3] [(unsigned short)4])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_11 [i_3] [i_3] [i_2] [i_1] [i_0]))))) ? (((((/* implicit */int) var_4)) | (((/* implicit */int) (short)14456)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [(signed char)12]))))))))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((arr_5 [i_0]) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_5 [i_2]))));
                            var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 420889764))));
                            arr_19 [i_0] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [i_1] [(short)2])) ? (127) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
                        }
                        var_16 += ((/* implicit */unsigned int) (signed char)112);
                        arr_20 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) arr_2 [i_0] [i_0]))))));
                    }
                } 
            } 
        }
        for (unsigned char i_6 = 3; i_6 < 14; i_6 += 4) 
        {
            var_17 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)245))))) ? (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_12 [i_0] [i_6] [i_0] [i_0] [i_0] [i_6 - 3]))))) : (arr_3 [i_0] [i_0] [i_0]))));
            var_18 ^= ((/* implicit */unsigned int) ((min((2239285098U), (((/* implicit */unsigned int) 376924308)))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (1815306072U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (arr_9 [i_6 - 1] [i_6 + 2]) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6]))) : (3792529052U)))))));
        }
        arr_23 [9ULL] [i_0] = ((/* implicit */_Bool) (((-((-(((/* implicit */int) arr_5 [i_0])))))) + (((((/* implicit */_Bool) max((502438247U), (arr_13 [i_0] [(unsigned char)13])))) ? (((((/* implicit */int) (unsigned short)22288)) - (((/* implicit */int) (unsigned short)14282)))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_16 [5])) : (((/* implicit */int) (_Bool)1))))))));
    }
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14309))) : (33546240U)))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) var_9)))))));
    var_20 *= var_6;
    var_21 &= max((max((max(((unsigned short)13762), ((unsigned short)4080))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))))), (((/* implicit */unsigned short) var_3)));
}
