/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55164
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
    var_11 = ((/* implicit */int) (short)22273);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((((((/* implicit */_Bool) (short)22282)) ? (((/* implicit */int) (unsigned short)49152)) : (((/* implicit */int) (short)22269)))), ((~(((/* implicit */int) (signed char)-27)))))) : (((((/* implicit */int) arr_1 [i_0])) | (arr_0 [i_0])))));
        var_12 = ((/* implicit */signed char) max((arr_1 [i_0]), (((/* implicit */unsigned short) ((short) min((((/* implicit */int) arr_1 [i_0])), (368095438)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    {
                        arr_13 [i_1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_6 [1U] [i_1 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4)))) : (((unsigned int) (unsigned short)10802)))))));
                        arr_14 [(unsigned short)17] [(unsigned short)17] [i_4] [i_3] [i_2] [i_1] = max((((/* implicit */unsigned int) ((unsigned short) -6188978774749060980LL))), (var_3));
                    }
                } 
            } 
            arr_15 [i_2] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 2])))) ^ (-368095429)));
            arr_16 [i_1 + 2] [i_2] = ((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) arr_9 [i_1] [i_2] [i_2])))));
        }
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
        {
            arr_19 [i_1] = ((/* implicit */_Bool) var_7);
            var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((long long int) (unsigned short)37768))) ? (arr_17 [i_1 + 1]) : (((/* implicit */int) max((arr_7 [i_1] [i_5]), (((/* implicit */short) (signed char)-27))))))) & ((~(((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1]))))));
        }
        var_14 += ((/* implicit */short) max((((/* implicit */int) (short)22273)), (-368095439)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)22267))));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 2; i_8 < 24; i_8 += 4) 
                {
                    {
                        var_16 &= ((/* implicit */signed char) arr_7 [i_1] [i_6]);
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned int) arr_26 [i_1 + 1] [i_8 - 1])))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned char) (_Bool)1);
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned long long int) arr_24 [i_6] [i_1 + 1] [i_1 - 1])))));
        }
        for (unsigned char i_9 = 1; i_9 < 24; i_9 += 3) 
        {
            var_20 = ((/* implicit */short) ((368095429) + (368095461)));
            var_21 -= ((/* implicit */short) (-(((((/* implicit */_Bool) ((short) arr_28 [i_9] [(unsigned short)24] [i_1] [(unsigned short)24] [i_1 + 2]))) ? (((/* implicit */int) arr_4 [i_9])) : ((-(((/* implicit */int) (unsigned short)64170))))))));
            arr_31 [i_1] [i_1] = ((/* implicit */unsigned int) arr_24 [4U] [i_9 - 1] [4U]);
            /* LoopNest 2 */
            for (signed char i_10 = 3; i_10 < 24; i_10 += 4) 
            {
                for (short i_11 = 2; i_11 < 24; i_11 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_33 [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 25; i_12 += 4) 
                        {
                            arr_41 [i_10] [i_11] = ((short) (-(((/* implicit */int) max(((short)-14447), (((/* implicit */short) (unsigned char)64)))))));
                            arr_42 [i_9] [i_12] [i_12] [i_11] [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) ((short) arr_20 [i_1 + 2] [i_9 + 1])))));
                        }
                        arr_43 [i_1] [i_10] [i_10] [i_10] [i_11] = (_Bool)1;
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((unsigned int) arr_11 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_1])), (((/* implicit */unsigned int) arr_8 [i_1] [i_9]))))))))));
        }
        arr_44 [i_1] |= ((/* implicit */unsigned short) ((unsigned char) arr_12 [i_1 + 2] [i_1 + 1] [12ULL] [12LL] [i_1]));
    }
}
