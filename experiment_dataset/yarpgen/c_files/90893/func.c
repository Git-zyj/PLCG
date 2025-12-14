/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90893
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
    var_20 = ((/* implicit */int) var_17);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned int) ((unsigned short) arr_2 [i_0 - 2] [i_1 + 4] [i_1 + 1]));
            var_21 = ((((/* implicit */int) (short)32767)) == (((/* implicit */int) arr_0 [i_0])));
            var_22 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_1 + 1]))));
            arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [8ULL]))))) ? ((~(1495615607U))) : (2799351689U)));
            arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [4ULL] [i_1] [(unsigned short)7])) ? (((/* implicit */int) arr_1 [i_1 + 3] [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_1 - 1]))));
        }
        for (int i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 3; i_4 < 12; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 2) 
                    {
                        {
                            arr_19 [i_0] [i_2 + 2] [i_0] [i_2] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) -1314505360)) || (((/* implicit */_Bool) 2799351689U)))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((4294967283U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)3] [6U])))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)31)) * (((/* implicit */int) var_3)))))));
                        }
                    } 
                } 
            } 
            var_24 -= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) 25U)) || ((_Bool)1))))));
            var_25 += ((/* implicit */unsigned int) (short)32767);
            var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 12U)))))));
        }
        var_27 = ((/* implicit */unsigned long long int) ((arr_12 [5] [i_0]) << ((((+(((/* implicit */int) (_Bool)1)))) - (1)))));
    }
    for (long long int i_6 = 3; i_6 < 17; i_6 += 2) 
    {
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) != (3079612281U))))));
        var_29 -= ((/* implicit */long long int) (-(((int) ((((/* implicit */_Bool) (short)31564)) ? (3079612282U) : (((/* implicit */unsigned int) -1)))))));
        var_30 = ((/* implicit */unsigned int) arr_22 [i_6 - 2]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */short) arr_24 [i_6]);
            var_32 = ((/* implicit */short) arr_23 [i_6]);
        }
        for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))), ((-(7499587505906042725ULL)))))));
            var_34 = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */int) arr_21 [i_6 + 2] [i_8 - 2])), (arr_20 [i_6 + 2]))));
            var_35 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_6])) * (((/* implicit */int) arr_21 [i_6] [i_6]))))) ? (((/* implicit */int) arr_21 [i_6 + 1] [i_8 - 2])) : (((/* implicit */int) arr_21 [i_6 + 1] [i_8 - 2]))))));
            var_36 = ((/* implicit */signed char) arr_21 [i_6] [i_6]);
        }
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            var_37 = ((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) arr_26 [i_6 - 3] [i_9 + 1]))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (arr_25 [i_6])))) ? (((/* implicit */int) arr_22 [i_9])) : (((arr_20 [i_6 - 3]) & (((/* implicit */int) arr_21 [i_6] [3]))))))));
            var_38 = ((/* implicit */unsigned int) arr_27 [i_6 - 1] [i_6 - 1]);
            arr_30 [i_6] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_21 [i_6 + 1] [i_9 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6] [i_9 + 1]))) : (arr_24 [i_6 - 1])))));
        }
        var_39 = ((/* implicit */unsigned long long int) arr_26 [i_6] [2]);
    }
}
