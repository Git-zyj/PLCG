/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83668
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) (unsigned char)6);
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 11; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_1 - 1])) | (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 4] [i_1 + 1]))))) == ((~(var_8)))));
                            var_16 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)93))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_4 = 3; i_4 < 13; i_4 += 2) 
    {
        arr_13 [i_4] = (!(((/* implicit */_Bool) var_5)));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (((3072008297989576243ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))))))));
                    var_18 = ((/* implicit */_Bool) ((unsigned char) 3072008297989576250ULL));
                    arr_19 [i_5] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_4 - 3]))));
                }
            } 
        } 
        arr_20 [i_4] = ((/* implicit */signed char) var_10);
    }
    for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        arr_24 [i_7] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) : (576458553280167936ULL))));
        arr_25 [i_7] = ((/* implicit */long long int) max(((-(((/* implicit */int) (signed char)63)))), (((/* implicit */int) (signed char)-29))));
        var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) var_1)), (15374735775719975362ULL))))), ((-(((/* implicit */int) var_0))))));
    }
    for (short i_8 = 2; i_8 < 21; i_8 += 4) 
    {
        arr_30 [i_8 + 4] = ((/* implicit */long long int) (-(var_8)));
        var_20 = ((/* implicit */_Bool) var_10);
        /* LoopSeq 4 */
        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 1; i_10 < 24; i_10 += 2) 
            {
                for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-12))));
                        var_22 += ((/* implicit */unsigned int) var_6);
                        arr_39 [14LL] [i_10] [i_10] [i_10] [i_8 + 1] = ((/* implicit */unsigned int) (+(((((((/* implicit */long long int) ((/* implicit */int) var_9))) - (-5017874089746092207LL))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                        var_23 = 253016786297582356LL;
                    }
                } 
            } 
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) 1023360681U))));
        }
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_5))));
            /* LoopNest 2 */
            for (unsigned short i_13 = 2; i_13 < 24; i_13 += 3) 
            {
                for (unsigned int i_14 = 1; i_14 < 22; i_14 += 2) 
                {
                    {
                        var_26 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967283U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1023360671U)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (4010284291913403103LL))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-12603)) | (((/* implicit */int) (unsigned short)50096))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_12)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))) - (1U)))))));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (-((-(((/* implicit */int) arr_42 [i_8 - 1] [i_8 + 2] [i_8 + 2] [i_8])))))))));
                        arr_49 [i_13] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_44 [i_13 - 1] [i_14 - 1] [i_14])), (4294967290U)))) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) ((arr_45 [i_13 - 1] [i_14 + 3] [i_14] [i_14]) == (((/* implicit */unsigned int) arr_44 [i_13 + 1] [i_14 - 1] [i_14])))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) != (((((/* implicit */long long int) ((/* implicit */int) (signed char)58))) & (min((var_11), (((/* implicit */long long int) var_5))))))));
            arr_50 [18U] [18U] [18U] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_6)) ? (min((4278375618U), (((/* implicit */unsigned int) var_4)))) : (((((/* implicit */_Bool) var_4)) ? (16591670U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
            var_29 = ((/* implicit */unsigned int) arr_47 [i_8] [i_8] [9LL]);
        }
        for (signed char i_15 = 0; i_15 < 25; i_15 += 2) 
        {
            arr_55 [(unsigned char)16] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_8 + 4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_4)))))))) : (((/* implicit */int) ((signed char) 12U)))));
            arr_56 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 3072008297989576235ULL)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) (short)-32767)) : (arr_26 [i_8])))) ? (((arr_35 [i_8 + 4] [i_15] [i_15]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_10)))))))));
        }
        for (unsigned int i_16 = 0; i_16 < 25; i_16 += 2) 
        {
            var_30 = ((/* implicit */unsigned int) (unsigned char)137);
            var_31 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned char)219)), (var_2)));
            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!((_Bool)1))))))) * (((16591674U) << (((var_10) - (254787061U))))))))));
            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) var_10))));
        }
        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) max((((((/* implicit */int) var_1)) << (((((/* implicit */int) var_3)) + (11734))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) arr_51 [i_8 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1427575363U)))))) : ((~(var_2))))))))));
    }
}
