/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6385
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
    var_19 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) (unsigned char)193)))), (((((/* implicit */_Bool) (short)-32744)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))) / (((/* implicit */int) ((short) (~(((/* implicit */int) (unsigned char)252))))))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0 + 2] = ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */int) (unsigned char)4)) - (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_10)))))) : (((/* implicit */int) ((signed char) arr_0 [i_0 - 1] [i_0 - 1])))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) (unsigned char)242));
            arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)4))) || ((!(((/* implicit */_Bool) (unsigned char)0))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
            {
                arr_10 [i_0 + 2] = ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (var_15));
                arr_11 [i_2] = ((/* implicit */unsigned int) var_4);
            }
            for (long long int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
            {
                arr_16 [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_3]))))))));
                arr_17 [i_0] [i_1] [i_3] [i_0 - 2] = ((/* implicit */_Bool) ((signed char) var_9));
                arr_18 [(unsigned short)12] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19735)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (unsigned char)227))))) || (((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)4))))))))));
            }
        }
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            arr_22 [i_0] = ((/* implicit */_Bool) arr_20 [i_0] [i_0]);
            arr_23 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_5 [i_4] [i_0] [i_0])))))) : (((/* implicit */int) ((_Bool) 0ULL)))));
        }
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            arr_26 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1] [i_5])) > (((/* implicit */int) (unsigned char)239)))), (((_Bool) arr_21 [i_0] [i_5]))));
            arr_27 [i_5] = ((/* implicit */signed char) (!(var_11)));
        }
    }
    for (short i_6 = 2; i_6 < 22; i_6 += 2) /* same iter space */
    {
        arr_30 [i_6 - 2] [i_6 - 1] = min((((unsigned int) (short)19717)), (((/* implicit */unsigned int) (short)-19743)));
        arr_31 [i_6 - 1] [i_6 + 1] = ((/* implicit */short) var_13);
    }
    for (short i_7 = 2; i_7 < 22; i_7 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_8 = 1; i_8 < 23; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    {
                        arr_46 [i_7] [i_7] [i_7] [i_8 + 1] [i_9] [i_7] = ((/* implicit */unsigned char) arr_33 [20ULL]);
                        arr_47 [i_10] = ((/* implicit */signed char) var_15);
                    }
                } 
            } 
        } 
        arr_48 [i_7] = ((/* implicit */long long int) var_7);
        arr_49 [i_7] [i_7] = ((signed char) arr_13 [i_7 - 1] [i_7 - 2] [i_7 + 1] [(_Bool)1]);
        /* LoopSeq 2 */
        for (short i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            arr_52 [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((short) var_10))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_51 [i_7] [i_7] [i_11])) : (((/* implicit */int) arr_44 [i_7] [i_11])))) : (((/* implicit */int) arr_9 [i_7 - 1] [i_7 + 2] [i_7] [i_11]))))));
            arr_53 [i_11] [i_11] [i_11] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)31))));
        }
        /* vectorizable */
        for (unsigned char i_12 = 1; i_12 < 21; i_12 += 4) 
        {
            arr_56 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -943211634)) || (((/* implicit */_Bool) arr_21 [i_7] [i_12 + 3]))));
            /* LoopSeq 2 */
            for (unsigned char i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    for (unsigned int i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        {
                            arr_64 [i_7] = ((/* implicit */unsigned long long int) ((arr_4 [i_7] [(unsigned short)0] [i_13]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)203))) : (var_16)));
                            arr_65 [i_7] [i_7] [i_12 - 1] [i_7] [i_7] [(unsigned short)18] [i_15] = ((/* implicit */unsigned long long int) var_8);
                            arr_66 [i_7] [i_12] [i_12 + 3] [i_13] [(short)5] [i_15] = ((/* implicit */unsigned int) ((_Bool) var_3));
                        }
                    } 
                } 
                arr_67 [i_7] [i_12] [i_12] = ((_Bool) arr_28 [i_7 - 2] [i_12 + 2]);
            }
            for (unsigned short i_16 = 3; i_16 < 22; i_16 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_17 = 0; i_17 < 24; i_17 += 1) 
                {
                    arr_74 [i_16] [i_16] [i_16] [i_17] [i_16] = ((unsigned int) (signed char)-88);
                    arr_75 [(short)16] [i_12] [i_12] [(short)20] [i_7] = ((/* implicit */unsigned char) ((28U) >> (((((/* implicit */int) (short)-19743)) + (19769)))));
                }
                arr_76 [i_7] [i_12] [i_16 + 2] [i_16 - 1] = (unsigned char)229;
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 24; i_18 += 3) 
                {
                    for (unsigned int i_19 = 0; i_19 < 24; i_19 += 2) 
                    {
                        {
                            arr_82 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)19749)) ? (((/* implicit */int) (unsigned char)11)) : (arr_13 [i_7 - 1] [i_12 - 1] [i_7 - 1] [i_16 + 2])));
                            arr_83 [i_7] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_19] = ((((/* implicit */int) var_17)) == (((/* implicit */int) (unsigned short)26732)));
                        }
                    } 
                } 
            }
            arr_84 [i_7] [i_12] [i_12] = ((/* implicit */unsigned char) ((signed char) (signed char)88));
        }
    }
    var_20 = ((/* implicit */unsigned short) (unsigned char)245);
}
