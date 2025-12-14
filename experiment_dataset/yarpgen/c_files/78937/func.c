/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78937
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
    var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) 8320503172174311974ULL)) ? (((/* implicit */int) min((var_0), (((/* implicit */short) var_1))))) : (var_14)))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)29986)) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)221)))))))) ? (var_14) : (((/* implicit */int) (unsigned short)16384))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0 + 2] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned short) -609931339);
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_16))))) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)18618))))) | (((((/* implicit */unsigned int) 3)) | (arr_4 [i_1] [i_1])))))) : (arr_6 [i_1])));
        var_21 = ((/* implicit */int) var_9);
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (+(-7084410707294814889LL)));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 2; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_22 = ((((/* implicit */_Bool) 4294967279U)) ? (0ULL) : (5843532046675497604ULL));
                            arr_19 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_11 [(short)13] [(short)16])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_16 [i_1] [i_2] [i_3] [i_4 + 3] [i_5] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(unsigned char)8] [i_2] [i_4] [18ULL])))))) : (((arr_17 [0ULL] [i_4 - 1] [0ULL] [i_1]) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_4 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4 + 2] [i_4 - 2] [i_4 + 1] [i_4 + 1]))) : (((((/* implicit */_Bool) (signed char)15)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1]))))))))));
                            var_23 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8191LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_5])))) ? (((((/* implicit */_Bool) arr_16 [i_1] [i_1] [(signed char)10] [i_1] [i_1] [i_1] [i_1])) ? (arr_16 [i_1] [i_1] [6ULL] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))));
                            var_24 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            arr_20 [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1860186940)) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_17 [i_1] [i_1] [i_1] [i_1])), ((((_Bool)0) ? (8190LL) : (((/* implicit */long long int) var_14)))))))));
            arr_21 [(unsigned short)9] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7986)) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_17 [i_1] [i_1] [(_Bool)1] [(unsigned short)6])) : (((arr_5 [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_1] [i_2] [i_1]))))))) ? (((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] [i_1])) ? (((((/* implicit */_Bool) (short)-10356)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) : (14884524146813829139ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)22075))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3562219926895722464ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)150))) : (-9223372036854775804LL))))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) min((var_25), (((_Bool) ((((/* implicit */_Bool) (short)31)) ? (((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((unsigned long long int) arr_26 [i_2] [i_2])))))));
                        var_26 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)194)) ? (arr_18 [i_1] [i_2] [i_2] [i_2] [i_6] [i_7] [i_7]) : (((/* implicit */int) (unsigned short)22087))))));
                    }
                } 
            } 
        }
    }
}
