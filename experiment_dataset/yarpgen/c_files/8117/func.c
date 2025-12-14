/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8117
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [(signed char)10] [i_1 - 2])) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 2])) : (((/* implicit */int) arr_4 [i_0] [i_1 - 2])))) / (((/* implicit */int) min((arr_4 [i_0] [i_1 + 1]), (arr_4 [i_0] [i_1 - 1])))))))));
                var_14 += ((/* implicit */short) ((((/* implicit */_Bool) (short)12560)) ? (((/* implicit */int) (short)12560)) : (((/* implicit */int) (short)12551))));
                arr_6 [i_1] = ((/* implicit */signed char) ((_Bool) ((_Bool) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_1))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_3 = 2; i_3 < 23; i_3 += 3) 
        {
            arr_14 [i_2] [i_3] = ((/* implicit */short) arr_12 [i_3] [i_3]);
            var_15 = ((unsigned int) arr_7 [i_3] [i_3]);
            arr_15 [i_2] [i_3] = ((/* implicit */long long int) max((((((/* implicit */_Bool) max(((short)12577), ((short)-12561)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)12561)) || (((/* implicit */_Bool) (short)12566))))) : (((((/* implicit */int) (short)12555)) ^ (((/* implicit */int) (short)-12581)))))), (((/* implicit */int) var_0))));
            arr_16 [i_3] [i_3] [i_3] = max(((short)-12569), ((short)-12581));
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)12559)) || (arr_13 [(_Bool)1]))) ? (((((/* implicit */int) (short)-12561)) | (((/* implicit */int) (short)12581)))) : (((/* implicit */int) var_0))));
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)12587)) ? (((/* implicit */int) (short)12592)) : (((/* implicit */int) (short)-12561)))))))));
        }
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((/* implicit */int) (short)-12553)))))));
            var_19 = ((/* implicit */signed char) var_2);
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    for (unsigned int i_8 = 1; i_8 < 22; i_8 += 3) 
                    {
                        {
                            var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)12560))))) || (((/* implicit */_Bool) (short)12567))));
                            arr_28 [i_6] [i_5] [(short)2] [i_7] [i_8] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)12555)) ? (((/* implicit */int) (short)-12560)) : (((/* implicit */int) (short)12554)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-12569)))))));
                            arr_29 [i_2] [i_5] [i_6] [i_7] [i_8 + 2] [i_6] = var_11;
                        }
                    } 
                } 
            } 
        }
        var_21 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((int) (short)-12581))) ? (((/* implicit */int) ((short) (short)-12561))) : (((/* implicit */int) (short)12547)))));
        var_22 = ((/* implicit */short) var_9);
        arr_30 [i_2] [i_2] = ((/* implicit */unsigned int) arr_24 [i_2] [i_2] [i_2]);
    }
    /* vectorizable */
    for (long long int i_9 = 2; i_9 < 17; i_9 += 3) 
    {
        arr_34 [i_9 + 1] = ((/* implicit */short) arr_11 [i_9 + 3] [i_9 + 3] [i_9 + 3]);
        arr_35 [(short)16] [i_9 + 3] = ((((/* implicit */_Bool) (short)12561)) ? (((/* implicit */int) (short)-12544)) : (((/* implicit */int) ((unsigned short) (short)-12582))));
        var_23 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-12586)) < (((/* implicit */int) arr_12 [i_9] [i_9])))) ? (((arr_32 [i_9 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)12570))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-12573)) ^ (((/* implicit */int) (short)-12560))));
    }
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-12581)) ? (((/* implicit */int) (short)12561)) : (((/* implicit */int) (short)12581))))) : (((unsigned int) (short)12560))))))))));
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((unsigned int) var_0))));
    var_27 = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)-12587)))) ? (((((/* implicit */_Bool) (short)12577)) ? (((/* implicit */int) (short)-12585)) : (((/* implicit */int) (short)-12581)))) : (((((((/* implicit */int) (short)-12581)) + (2147483647))) >> (((((/* implicit */int) (short)-12582)) + (12593)))))));
}
