/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64502
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
    var_17 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */unsigned char) max((((unsigned long long int) arr_1 [i_0 + 1])), (((/* implicit */unsigned long long int) var_12))));
        var_18 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)255)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1))))) : (((/* implicit */int) var_16)))));
    }
    for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) 
    {
        var_19 += ((/* implicit */long long int) var_0);
        /* LoopSeq 4 */
        for (int i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */_Bool) max(((~(max((4689021496084023892ULL), (((/* implicit */unsigned long long int) var_16)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_13)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_9))))))));
                var_21 += ((/* implicit */_Bool) 18310806047764431456ULL);
                var_22 *= ((/* implicit */signed char) ((((unsigned int) var_6)) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-8320))))));
                arr_10 [i_1] [i_1] [(unsigned short)0] [i_3] = ((/* implicit */_Bool) 12550981280891242529ULL);
            }
            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
            {
                arr_13 [i_4] [i_4] [i_1] = (~((-(((/* implicit */int) (unsigned char)255)))));
                var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) 1144815006)))));
            }
            arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_6 [i_1] [i_1]))));
            arr_15 [(unsigned char)2] [i_1] = ((/* implicit */unsigned short) arr_4 [i_1]);
        }
        for (signed char i_5 = 4; i_5 < 17; i_5 += 2) /* same iter space */
        {
            var_24 += ((/* implicit */_Bool) 1447201874642693290LL);
            /* LoopNest 3 */
            for (long long int i_6 = 4; i_6 < 18; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        {
                            var_25 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)8319)))) : (max((11880333997601340010ULL), (9774689674691841710ULL)))))));
                            arr_25 [i_5] [i_7] [i_6 - 2] [(unsigned short)4] [i_8] [i_7] [i_7] &= var_2;
                        }
                    } 
                } 
            } 
            arr_26 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((unsigned long long int) (unsigned char)14)))))));
            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -954482222227881475LL))));
        }
        /* vectorizable */
        for (signed char i_9 = 4; i_9 < 17; i_9 += 2) /* same iter space */
        {
            arr_29 [i_1] [i_9] [i_9] = ((/* implicit */long long int) (unsigned char)213);
            /* LoopNest 3 */
            for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                for (unsigned char i_11 = 3; i_11 < 18; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
                    {
                        {
                            var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-8320))));
                            arr_37 [i_9] [i_10] [i_9] &= ((/* implicit */unsigned char) (+(4689021496084023892ULL)));
                            var_28 &= ((/* implicit */short) arr_11 [i_9 + 2] [i_9] [i_9 + 2]);
                            arr_38 [i_1] [i_1] [i_10] [i_1] = ((/* implicit */unsigned char) 11880333997601340010ULL);
                            arr_39 [i_1] [i_11 - 2] [i_11 - 2] [i_10] [i_1] [i_1 - 1] [i_1] = ((/* implicit */signed char) 4689021496084023892ULL);
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */unsigned char) (-(11880333997601340010ULL)));
        }
        for (signed char i_13 = 4; i_13 < 17; i_13 += 2) /* same iter space */
        {
            arr_42 [i_13] &= ((/* implicit */unsigned long long int) max((((long long int) arr_11 [i_1] [i_1 - 2] [8ULL])), (max((((/* implicit */long long int) (short)8319)), (arr_19 [i_13 + 2])))));
            /* LoopSeq 2 */
            for (unsigned short i_14 = 0; i_14 < 19; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_15 = 3; i_15 < 18; i_15 += 3) 
                {
                    for (unsigned char i_16 = 0; i_16 < 19; i_16 += 3) 
                    {
                        {
                            arr_51 [i_1] [i_1] [i_14] [(unsigned char)0] [i_15] [8ULL] &= ((/* implicit */int) (unsigned char)98);
                            var_30 &= ((/* implicit */short) (_Bool)0);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 3) 
                {
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) 13757722577625527724ULL))));
                    var_32 = ((/* implicit */unsigned int) (-(arr_33 [i_1 - 1])));
                }
                arr_55 [(signed char)11] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((unsigned int) 1766163191U)), (((/* implicit */unsigned int) (signed char)-111)))))));
                arr_56 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_9);
                var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) var_14))));
            }
            for (unsigned short i_18 = 0; i_18 < 19; i_18 += 1) 
            {
                var_34 = ((/* implicit */long long int) arr_46 [(unsigned short)18]);
                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)8990))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1634))) : (max((((/* implicit */unsigned int) arr_40 [i_1 - 2])), (var_9)))));
            }
            arr_59 [i_1] [i_13] [i_13 + 2] = ((/* implicit */unsigned char) ((long long int) max((9080557755650534636LL), (((/* implicit */long long int) (signed char)31)))));
        }
    }
}
