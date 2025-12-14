/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78058
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
    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_9))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            arr_5 [(_Bool)1] [i_0] [i_1] = ((/* implicit */unsigned char) ((short) arr_1 [i_1 + 1] [i_1 + 1]));
            arr_6 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)5348))));
            var_20 = ((/* implicit */_Bool) (~(arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 2])));
            arr_7 [i_0] [i_1 + 2] = ((/* implicit */short) ((unsigned int) 6397451015982223953LL));
            arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1 + 3])) && (((/* implicit */_Bool) arr_1 [i_1] [i_1 + 2]))));
        }
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-24618)) | (((/* implicit */int) arr_3 [i_0] [i_0]))))) != (1854616205005457220ULL))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1])))) : (((/* implicit */int) ((_Bool) arr_3 [i_0] [i_2])))));
            var_21 = ((/* implicit */_Bool) (short)5327);
            var_22 ^= ((/* implicit */short) ((((/* implicit */int) (((+(arr_10 [i_0] [i_0] [i_0]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5317)))))) <= (((((((/* implicit */_Bool) (short)5323)) && (((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)3] [i_0])))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4))))));
            arr_12 [i_2] = ((/* implicit */unsigned int) 18435375920540017738ULL);
        }
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 23; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_6 = 1; i_6 < 23; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */signed char) (short)9477);
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0] [i_3] [i_4] [i_5] [i_0] [i_5] [i_6 + 1])) << (((/* implicit */int) arr_19 [i_0] [i_3] [i_3] [i_4] [i_4] [i_4] [i_6 + 1])))))));
                            var_25 = ((/* implicit */int) ((((_Bool) (short)5348)) || (((/* implicit */_Bool) arr_2 [i_0] [i_3 - 3] [i_4]))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)21938))) <= (arr_2 [i_0] [i_3] [i_3 + 1]))))));
                            arr_23 [i_7] [i_5] [i_5] [i_5] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) (((+(arr_0 [i_5] [i_4]))) <= (((/* implicit */long long int) arr_14 [i_3 - 2]))));
                            var_27 = ((/* implicit */_Bool) ((signed char) (unsigned short)38823));
                        }
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned char) ((long long int) ((arr_21 [i_0] [i_3 - 3] [i_5]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8333))))));
                            arr_27 [i_5] [i_3 - 2] [i_4] [i_5] [i_8] = ((/* implicit */unsigned int) (short)-8311);
                            arr_28 [i_0] [(short)2] [i_5] [i_4] [i_4] [i_5] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-5317)) * (((/* implicit */int) (!((_Bool)1))))));
                            arr_29 [i_8] [(unsigned char)0] [i_5] [(signed char)11] [i_5] [i_0] [i_0] = ((/* implicit */_Bool) (~(((3409534674U) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_0] [i_8] [i_5] [i_4] [i_3] [i_0] [i_0])) * (((/* implicit */int) (_Bool)1)))))))));
                        }
                        for (unsigned short i_9 = 1; i_9 < 20; i_9 += 4) 
                        {
                            var_29 = ((/* implicit */_Bool) arr_13 [i_3 - 2]);
                            var_30 = (!((_Bool)1));
                        }
                        arr_32 [i_0] [i_3] [i_4] [i_5] |= ((((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [4LL] [i_3 - 3] [i_0] [i_0] [i_0]))) : (arr_10 [(_Bool)1] [i_3] [i_3]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [(unsigned short)13])))))));
                    }
                } 
            } 
        } 
        var_31 = ((((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-110)) & (((/* implicit */int) (short)-5317))))) | (((((/* implicit */unsigned int) var_7)) & (var_17))))) & (((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) | (((/* implicit */int) (_Bool)1)))) | (((((/* implicit */int) (unsigned char)106)) | (((/* implicit */int) (short)7877))))))));
        var_32 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (short)2136)) ^ (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))));
        var_33 = ((/* implicit */signed char) (!(((((/* implicit */int) (!(((/* implicit */_Bool) 635756671072268100LL))))) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)62)) <= (((/* implicit */int) (unsigned char)18)))))))));
    }
    var_34 = ((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) (_Bool)1)))));
}
