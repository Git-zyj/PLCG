/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89039
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> ((((~(((/* implicit */int) (short)-24526)))) - (24520)))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_15 [(unsigned char)12] [i_1] [i_2] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_0 - 1]))));
                            arr_16 [i_0] [(signed char)7] [i_4] [14LL] [i_4] [(signed char)11] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) arr_0 [i_0 - 1] [i_4]))));
                            arr_17 [i_0 - 1] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0 + 3] = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_13 [i_0] [(unsigned char)11] [(short)7] [(short)3] [1LL] [i_2] [(unsigned char)3])))));
                        }
                    } 
                } 
            } 
            var_20 = ((signed char) (unsigned char)15);
        }
        for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            arr_22 [(unsigned char)16] [i_5] [i_0 + 2] = ((/* implicit */_Bool) -1865545152172871395LL);
            arr_23 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_0 + 2] [i_5] [i_0 - 1]))));
            arr_24 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26368)) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [(unsigned char)5] [(unsigned char)5])))))));
            var_21 = ((/* implicit */unsigned char) var_11);
        }
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) (-(((((((/* implicit */int) var_10)) + (2147483647))) >> (((2146959360U) - (2146959348U)))))));
            arr_28 [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (var_9)));
        }
        arr_29 [i_0] [15LL] = ((/* implicit */unsigned char) var_10);
        /* LoopSeq 3 */
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
        {
            arr_32 [i_7] = ((/* implicit */unsigned int) var_18);
            arr_33 [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_0 + 3] [i_0] [i_0 + 3] [i_0]))));
            /* LoopNest 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)112)) ? ((+(((/* implicit */int) arr_7 [i_0] [i_7] [i_7] [i_9])))) : ((-(((/* implicit */int) var_8))))));
                        var_24 = ((/* implicit */unsigned int) ((long long int) var_0));
                    }
                } 
            } 
        }
        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-60)))))) ? (arr_34 [i_0 + 2] [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_10])) ? (((/* implicit */int) arr_2 [12U])) : (((/* implicit */int) (unsigned char)19)))))));
            var_26 = ((/* implicit */_Bool) ((((_Bool) (short)-15511)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_34 [i_0] [i_0 + 1] [i_0 + 1])));
            var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_39 [i_0]))));
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_30 [(_Bool)1] [i_0 + 3])) : (((/* implicit */int) var_3))));
            var_29 = ((/* implicit */unsigned int) ((unsigned char) var_17));
        }
        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
        {
            arr_44 [(_Bool)1] [i_11] [10U] = ((/* implicit */long long int) ((_Bool) var_17));
            /* LoopNest 2 */
            for (unsigned char i_12 = 3; i_12 < 16; i_12 += 2) 
            {
                for (unsigned int i_13 = 2; i_13 < 15; i_13 += 3) 
                {
                    {
                        var_30 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
                        arr_49 [i_0 + 3] [i_11] [i_12 - 2] [8LL] = ((/* implicit */unsigned char) arr_38 [i_0 + 1] [i_11] [i_12] [i_13 + 2]);
                        var_31 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-26370))))) : (((/* implicit */int) (short)27667))));
                    }
                } 
            } 
            arr_50 [i_0] [i_11] [14U] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_0 - 1])) != (((/* implicit */int) var_14))));
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned char)156))))) && (((/* implicit */_Bool) var_10))));
        }
    }
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((((/* implicit */int) min(((short)30720), ((short)3304)))), (((((/* implicit */int) var_17)) - (((/* implicit */int) var_2))))))) > (var_9)));
    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) || (var_15)));
    /* LoopNest 2 */
    for (signed char i_14 = 0; i_14 < 23; i_14 += 2) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                var_35 = ((/* implicit */_Bool) ((unsigned char) (-((-(((/* implicit */int) var_8)))))));
                arr_57 [i_14] [15LL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)84))))) == (min((((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))))), (var_5)))));
            }
        } 
    } 
    var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
}
