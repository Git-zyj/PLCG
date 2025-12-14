/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60880
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
    var_10 = ((/* implicit */short) var_2);
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((((((_Bool)1) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4130054566U))))) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            arr_7 [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0])) && (((/* implicit */_Bool) 2086420533)))) ? (((/* implicit */int) ((unsigned char) arr_6 [(unsigned short)10]))) : (((/* implicit */int) arr_5 [i_1 + 1]))));
            var_12 = ((/* implicit */int) arr_1 [i_0] [i_1 - 3]);
            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        }
        for (int i_2 = 2; i_2 < 22; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */long long int) var_2);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_15 += ((/* implicit */unsigned int) arr_14 [i_0]);
                            var_16 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)38159)) ? (((/* implicit */int) arr_12 [(_Bool)1] [i_2] [i_2])) : (1144495059))));
                            var_17 = ((/* implicit */unsigned char) var_0);
                            arr_17 [i_3] = ((/* implicit */int) -6881893962422287882LL);
                            var_18 ^= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                        }
                    }
                } 
            } 
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned int i_6 = 1; i_6 < 22; i_6 += 3) 
            {
                var_19 += ((/* implicit */unsigned short) arr_14 [i_2 + 1]);
                arr_21 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 10ULL))))) % (((var_7) ? (((/* implicit */int) arr_6 [i_6])) : (((/* implicit */int) var_4))))));
            }
            for (unsigned short i_7 = 2; i_7 < 23; i_7 += 3) 
            {
                arr_24 [i_0] = ((/* implicit */unsigned long long int) (((_Bool)0) || (((/* implicit */_Bool) -1144495060))));
                arr_25 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */int) var_1);
                var_20 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [(_Bool)1]))));
            }
            for (unsigned short i_8 = 1; i_8 < 22; i_8 += 3) 
            {
                var_21 = ((/* implicit */int) arr_9 [i_0] [i_8]);
                var_22 = ((/* implicit */unsigned char) arr_4 [i_8 - 1]);
            }
            for (int i_9 = 3; i_9 < 23; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (short i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) var_5);
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) * (((/* implicit */int) var_0)))) * (((/* implicit */int) ((unsigned short) (unsigned short)65505)))))) ? (min((((arr_22 [i_11] [i_10] [i_9]) << (((((/* implicit */int) arr_19 [(unsigned short)12] [i_11] [i_9])) + (71))))), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) == (((/* implicit */int) (_Bool)1))))))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) (_Bool)1))))) ? (arr_11 [i_9] [i_9 - 2] [i_9] [i_9 - 1]) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_11 [i_0] [i_11] [i_9] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17752)))))))) ? (((/* implicit */int) min((max((var_1), (arr_36 [i_0] [i_2] [i_9] [i_10] [i_2] [(_Bool)1] [i_2]))), (var_4)))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) min((var_2), (var_0))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 1; i_13 < 21; i_13 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) min((((/* implicit */int) var_1)), (min((((/* implicit */int) min((var_8), (((/* implicit */signed char) arr_4 [i_13]))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))))));
                            arr_41 [i_0] &= ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), (max((min((((/* implicit */int) arr_19 [i_13] [i_2] [i_0])), (-2070653387))), (((/* implicit */int) var_4))))));
                            var_27 = ((((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_0] [(unsigned short)3] [i_2 + 2] [i_9] [i_12] [i_2 + 2])) / (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_2] [i_2 - 2] [i_2 + 2]))) : (1417410732798157967LL))) == (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((arr_34 [i_0] [16] [i_9] [i_12] [i_13 + 2] [i_12] [i_0]) || (((/* implicit */_Bool) (unsigned short)16256))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)16247)) >= (((/* implicit */int) (signed char)81)))) ? (((((/* implicit */int) arr_36 [(signed char)12] [i_0] [i_0] [i_2] [i_2 - 1] [i_9 + 1] [i_0])) | (((/* implicit */int) arr_30 [i_2 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [(unsigned short)17] [i_2] [(signed char)6] [i_2] [i_2 - 2] [i_9 - 3] [20ULL])))))));
                            var_29 &= (!(((/* implicit */_Bool) ((unsigned short) ((var_0) ? (((/* implicit */int) arr_19 [i_0] [i_2] [i_9 - 2])) : (((/* implicit */int) (unsigned short)65535)))))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_30 = var_9;
                var_31 = ((/* implicit */signed char) var_6);
            }
            var_32 = arr_52 [i_0] [i_16];
        }
    }
    var_33 -= ((/* implicit */_Bool) var_6);
}
