/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80358
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
    var_14 = var_13;
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [(signed char)9] [(signed char)9] = ((/* implicit */_Bool) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) var_8)))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((_Bool) var_4)))))) : (var_7));
        var_15 = ((/* implicit */short) arr_2 [i_1]);
        arr_8 [i_1] = ((/* implicit */short) arr_6 [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((unsigned int) arr_6 [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3])))));
            /* LoopNest 3 */
            for (unsigned short i_4 = 1; i_4 < 9; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (unsigned int i_6 = 3; i_6 < 9; i_6 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((unsigned int) var_8));
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) var_11);
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */signed char) arr_11 [i_2]);
            /* LoopNest 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    {
                        arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_8]))) : (((long long int) var_9))));
                        arr_28 [i_8] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */short) arr_24 [i_8] [i_7] [i_2]);
                    }
                } 
            } 
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (var_5))))));
        }
        for (long long int i_9 = 2; i_9 < 9; i_9 += 2) 
        {
            arr_32 [i_2] [i_9] [i_2] = var_13;
            var_20 = ((/* implicit */long long int) arr_19 [i_9] [i_2] [i_2] [i_2] [i_2]);
            arr_33 [i_2] = ((/* implicit */unsigned int) var_6);
            arr_34 [i_2] [i_9] [i_2] = ((/* implicit */signed char) var_4);
            arr_35 [i_2] [i_2] = ((/* implicit */signed char) var_9);
        }
        /* vectorizable */
        for (signed char i_10 = 2; i_10 < 9; i_10 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32751)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_38 [i_11] [i_2])) : (((/* implicit */int) ((short) var_2)))));
                arr_41 [i_2] = ((/* implicit */_Bool) var_7);
                arr_42 [i_2] [i_2] [i_2] [i_2] = ((short) ((_Bool) arr_24 [i_10] [i_10] [i_10]));
            }
            var_22 -= ((/* implicit */_Bool) arr_2 [i_10 + 1]);
        }
        var_23 = ((/* implicit */unsigned short) ((signed char) arr_13 [i_2] [i_2]));
        var_24 = ((/* implicit */_Bool) var_9);
        arr_43 [i_2] [i_2] = var_10;
    }
    /* LoopNest 3 */
    for (short i_12 = 1; i_12 < 12; i_12 += 1) 
    {
        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 2) 
        {
            for (long long int i_14 = 2; i_14 < 11; i_14 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) var_2);
                    arr_51 [i_14] [(_Bool)1] [i_14] = ((/* implicit */unsigned char) ((unsigned short) 4007418932205160881LL));
                    var_26 ^= arr_48 [i_12 + 2];
                }
            } 
        } 
    } 
}
