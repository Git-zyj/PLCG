/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90650
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
    var_10 = ((/* implicit */unsigned char) var_2);
    var_11 *= ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [(signed char)5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_2 [i_0 + 1] [i_0])))) || (((/* implicit */_Bool) (+(var_0))))));
                            var_12 = ((/* implicit */unsigned int) max((((unsigned short) 7146051702696265745ULL)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)21)))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_4 = 4; i_4 < 22; i_4 += 2) 
                {
                    arr_12 [(unsigned short)2] [i_1] [18LL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                arr_19 [(unsigned char)15] [i_1] [i_1] [i_1] [21U] [i_1] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_5 + 4] [i_5 + 4] [i_0 + 3] [i_5] [i_4 - 2]))));
                                var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) arr_1 [i_6])))));
                                var_14 = ((/* implicit */int) 16137900656953655698ULL);
                            }
                        } 
                    } 
                }
                for (unsigned int i_7 = 4; i_7 < 21; i_7 += 3) /* same iter space */
                {
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_10 [i_1] [i_7 - 1] [1U] [(signed char)3]))));
                    arr_24 [i_0 + 3] [i_1] [i_1] [i_7] = ((/* implicit */short) arr_16 [i_0 + 3] [8U] [i_7] [i_7] [i_7]);
                    var_16 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)31)) || (((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_7 - 3] [(short)7] [2U])), ((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_7 + 2])))))))));
                    arr_25 [i_0] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_0 + 2] [(short)9] [i_7 - 3] [8ULL] [i_7 - 4])) : (((unsigned int) max((2308843416755895939ULL), (((/* implicit */unsigned long long int) (unsigned char)95)))))));
                }
                for (unsigned int i_8 = 4; i_8 < 21; i_8 += 3) /* same iter space */
                {
                    arr_29 [2ULL] [i_1] = ((/* implicit */unsigned short) arr_6 [i_0] [i_8 - 1]);
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)66), ((unsigned char)153))))) : ((~(max((6462994242113571783LL), (((/* implicit */long long int) arr_0 [i_0])))))))))));
                    arr_30 [i_8 + 2] [(_Bool)1] [12] [(signed char)20] = ((/* implicit */int) (unsigned char)8);
                }
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_0 + 2]))))) * (((arr_3 [i_0 + 2]) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)153)))))));
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        arr_38 [i_0] [i_0] [i_0 - 1] [i_0 + 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), ((~(((/* implicit */int) arr_27 [i_10] [i_9] [i_1] [i_0]))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)51))));
                    }
                    arr_39 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 425323508U)) ? (16137900656953655698ULL) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (signed char)-1)))))));
                }
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) max((14274585938520358824ULL), (((/* implicit */unsigned long long int) 1718073731))))) ? (7312620242034149837ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11528))))))));
            }
        } 
    } 
}
