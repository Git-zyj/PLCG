/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65925
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
    var_10 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_11 |= ((/* implicit */_Bool) var_0);
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(var_9)));
        var_12 = var_8;
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) var_0))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_5 [i_1] [i_1])))) ? (var_1) : ((~(((/* implicit */int) var_0))))));
        var_14 &= ((/* implicit */unsigned char) var_7);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            arr_10 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_8 [i_1])) : (arr_0 [i_2] [i_1])))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (arr_6 [(short)15]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [(_Bool)1])))))))) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_0 [i_1] [i_1])))))));
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        }
    }
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) var_7);
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                {
                    var_16 = var_0;
                    var_17 = ((/* implicit */unsigned int) (~(var_1)));
                    arr_21 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */int) var_3);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        var_18 = arr_0 [(unsigned char)9] [9];
        /* LoopSeq 3 */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            arr_29 [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) arr_1 [i_6] [(unsigned char)6])) ? (var_2) : (((/* implicit */unsigned long long int) arr_6 [i_7]))))));
            arr_30 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6] [i_7])))))) ? (arr_26 [i_7]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_24 [i_6] [i_7]) : (((/* implicit */long long int) var_9)))))));
        }
        for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            arr_33 [10ULL] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_23 [i_6]))));
            var_19 = ((/* implicit */unsigned short) arr_22 [i_6]);
            /* LoopSeq 1 */
            for (short i_9 = 2; i_9 < 10; i_9 += 3) 
            {
                var_20 = ((/* implicit */unsigned short) arr_0 [i_6] [i_6]);
                var_21 = ((/* implicit */_Bool) (+(arr_6 [i_6])));
            }
        }
        for (unsigned long long int i_10 = 4; i_10 < 10; i_10 += 3) 
        {
            var_22 = ((/* implicit */int) var_7);
            var_23 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_6 [(_Bool)1])) : (((((/* implicit */_Bool) -8013601904626409676LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (3345327916U))));
        }
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_2))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_1) : (var_9)))) ? (((/* implicit */long long int) var_1)) : (arr_36 [i_6] [i_6])));
    }
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_7)) ? (var_7) : (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (var_1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17846)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) (short)17846))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (var_6)))) : (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
    var_27 = ((/* implicit */long long int) var_8);
}
