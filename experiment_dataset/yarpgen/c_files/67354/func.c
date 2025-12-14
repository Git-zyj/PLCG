/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67354
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (var_1)))) : ((+(((/* implicit */int) ((unsigned char) var_8)))))));
    var_13 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)24576))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)192)) << (((arr_1 [(unsigned char)15]) - (1938529819)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_5))));
                var_15 += ((/* implicit */short) (signed char)7);
                arr_13 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) arr_8 [i_0 - 2]);
                arr_14 [i_0 - 2] = ((((/* implicit */_Bool) arr_11 [i_2] [i_1] [i_0 - 2])) ? (arr_0 [i_0 - 2] [i_2 - 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((-980586859567037985LL) | (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)24))))));
            }
            /* vectorizable */
            for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */int) var_2)) < (((/* implicit */int) (short)-24577))))));
                var_17 = ((/* implicit */short) arr_6 [i_0 + 1] [i_1] [i_3 + 3]);
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                arr_20 [i_0 - 2] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)63)) || (((/* implicit */_Bool) (short)-12233))))) ^ (((/* implicit */int) var_5))))) ? ((~(((((/* implicit */int) var_7)) ^ (arr_17 [i_0 + 1] [(signed char)11] [i_0 - 1] [i_0]))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [13] [i_1] [i_4])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)-24577)))))))));
                var_18 = ((/* implicit */short) ((((long long int) (_Bool)0)) ^ (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)253)) > (((/* implicit */int) var_5)))) ? (((/* implicit */int) (short)-24577)) : ((((_Bool)1) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_10 [i_0 + 1] [(unsigned char)10])))))))));
                arr_21 [16] [i_4] = ((/* implicit */long long int) ((_Bool) min(((~(((/* implicit */int) (short)32183)))), (((/* implicit */int) (unsigned char)232)))));
                var_19 = (+(281200098803712LL));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    for (short i_7 = 3; i_7 < 16; i_7 += 1) 
                    {
                        {
                            arr_31 [i_5] = ((/* implicit */short) arr_6 [i_1] [i_5] [i_7]);
                            arr_32 [i_0] [i_1] [i_6] [i_7 - 1] = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [(unsigned char)12]))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) | (1055531162664960LL)))))));
                        }
                    } 
                } 
                arr_33 [i_0] [i_1] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) arr_26 [i_0 - 2])), ((short)12226))))));
                var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-24577))) < (-2698121225563780678LL)));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (unsigned char)65))))) ? (((((/* implicit */_Bool) ((long long int) 397654469U))) ? (((((/* implicit */_Bool) arr_7 [i_0])) ? (6044358081892418212LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0 + 1] [i_0 - 1]))))) : (((/* implicit */long long int) min((2147483647), (((/* implicit */int) (signed char)-126)))))));
            }
            var_22 = ((/* implicit */_Bool) (unsigned char)85);
        }
        var_23 = var_4;
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
    {
        var_24 = (unsigned char)41;
        var_25 = ((/* implicit */signed char) min((var_25), ((signed char)81)));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            for (long long int i_10 = 2; i_10 < 12; i_10 += 3) 
            {
                for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    {
                        var_26 += ((/* implicit */long long int) var_5);
                        arr_44 [i_8] [i_9] [i_10 - 1] [i_8] = ((/* implicit */_Bool) (~(-6044358081892418212LL)));
                        var_27 = ((/* implicit */unsigned char) (_Bool)0);
                    }
                } 
            } 
        } 
    }
}
