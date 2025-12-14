/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57840
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
    var_20 = ((/* implicit */unsigned long long int) var_11);
    var_21 += min((((unsigned long long int) var_1)), (max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_22 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) (+((~(0ULL)))))) ? (max((-793644285464804238LL), (((/* implicit */long long int) 3058311792U)))) : ((+(arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)46))));
        arr_6 [(unsigned char)11] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [3ULL] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        var_24 = ((((/* implicit */int) var_8)) <= (((/* implicit */int) max(((_Bool)1), ((_Bool)0)))));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [(_Bool)1] [i_2])) != (((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_13), (((/* implicit */long long int) var_7))))) < ((((_Bool)1) ? (134217664ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                arr_16 [i_2] [i_3] [(unsigned char)0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) (unsigned char)255)))))), (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (var_13))) : (-8343834521963846064LL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_5 = 3; i_5 < 10; i_5 += 1) 
                {
                    arr_19 [i_2] [i_3] [0LL] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_5 + 1]))));
                    var_25 = ((arr_11 [i_2] [i_3]) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : ((-(134217664ULL))));
                    arr_20 [i_2] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_5 + 2] [i_5 - 2])) ? (arr_14 [i_5 + 2] [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                    arr_21 [i_2] [(_Bool)0] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned long long int) arr_7 [i_5] [i_5 + 2]));
                    arr_22 [i_5 - 3] [i_3] [i_4] [i_5 - 3] = ((arr_7 [i_5 - 1] [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5 - 3]))));
                }
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_26 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_7 [i_2] [i_6])) ? (arr_7 [i_2] [i_2]) : (var_4)))));
                var_27 = ((/* implicit */unsigned char) var_5);
            }
            for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 1) 
            {
                var_28 = (!(((/* implicit */_Bool) min((arr_24 [i_2]), (var_15)))));
                arr_29 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_7 - 1] [i_3] [(unsigned char)4])) * (((((/* implicit */_Bool) (unsigned char)216)) ? (((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned char)48)) % (((/* implicit */int) (unsigned char)214))))))));
            }
            var_29 = max((18446744073575333955ULL), (((/* implicit */unsigned long long int) (unsigned char)255)));
            var_30 = ((/* implicit */unsigned long long int) max(((unsigned char)43), ((unsigned char)131)));
        }
    }
    /* LoopSeq 1 */
    for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
    {
        arr_32 [i_8] = ((/* implicit */_Bool) arr_1 [i_8]);
        arr_33 [14LL] = (unsigned char)217;
        arr_34 [(_Bool)1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4118113146413747841LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0))));
        arr_35 [i_8] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_17)) ? (8546038592797907157LL) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
    }
}
