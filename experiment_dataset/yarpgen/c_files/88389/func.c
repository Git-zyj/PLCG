/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88389
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2357623939U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) << (((8605406806215252042LL) - (8605406806215252036LL)))))) : (3404217271U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) | ((~(((/* implicit */int) var_2))))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [(short)8] = ((/* implicit */short) ((max(((-(arr_7 [i_0] [i_1] [i_2] [i_3]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [11] [i_0])) && ((_Bool)1)))))) == (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)63))))));
                        var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) 3619482529U)) ? (675484766U) : (675484766U)))));
                        var_22 *= ((/* implicit */int) (~(((long long int) (-(((/* implicit */int) (_Bool)1)))))));
                        var_23 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3619482518U))))) & (arr_7 [i_0] [i_1] [i_2] [i_1])))), ((~(((4294967291U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-25857)))))))));
                        var_24 = ((/* implicit */long long int) ((675484760U) << (((max((((675484762U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))), (((/* implicit */unsigned int) arr_9 [i_3] [i_3 - 1] [(_Bool)1] [i_3 - 1])))) - (4294956382U)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (long long int i_5 = 2; i_5 < 10; i_5 += 3) 
            {
                {
                    var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50747))) * (300665111U))))));
                    var_26 = ((/* implicit */_Bool) (unsigned char)115);
                    var_27 = ((/* implicit */short) ((max(((+(((/* implicit */int) (short)-73)))), (((/* implicit */int) var_16)))) >> (((var_11) - (1656719739U)))));
                }
            } 
        } 
        var_28 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) % (((4294967274U) >> (((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)11128)))) - (11120)))))));
        var_29 = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0])))));
    }
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_7] [i_6] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16))))) >= (arr_21 [i_6])));
            /* LoopNest 2 */
            for (unsigned int i_8 = 1; i_8 < 21; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    {
                        arr_28 [i_9] [i_8] [(short)5] [i_7] [i_8] [i_6] = ((/* implicit */unsigned char) ((int) arr_27 [i_6] [(short)6] [i_8]));
                        var_31 = ((/* implicit */unsigned char) ((long long int) arr_26 [i_6] [i_6] [i_8 - 1] [i_8]));
                        var_32 = var_10;
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            for (unsigned char i_11 = 2; i_11 < 22; i_11 += 4) 
            {
                for (short i_12 = 4; i_12 < 22; i_12 += 1) 
                {
                    {
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_12))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_25 [(unsigned char)22] [i_10] [i_11] [i_11])) / (arr_23 [i_6] [i_6])))) ? (max((3619482518U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6])))));
                        var_34 = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */int) (short)0)), (arr_25 [i_11 - 2] [i_11 - 2] [i_10] [i_12 - 1]))));
                        var_35 = ((/* implicit */signed char) (unsigned short)50747);
                    }
                } 
            } 
        } 
        arr_36 [i_6] [i_6] = ((/* implicit */short) 1810606357U);
    }
    for (unsigned int i_13 = 1; i_13 < 17; i_13 += 3) 
    {
        var_36 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_30 [i_13] [i_13 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_31 [(unsigned char)7] [i_13 + 2] [i_13 + 2] [(unsigned char)7])) ? (((/* implicit */long long int) arr_25 [(unsigned char)17] [i_13] [i_13] [i_13 + 2])) : (arr_19 [(short)22] [i_13 + 1])))))) : (0U)));
        var_37 &= ((/* implicit */unsigned int) var_19);
    }
    /* LoopSeq 1 */
    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
    {
        var_38 = ((/* implicit */unsigned short) max(((+(arr_30 [i_14] [i_14]))), (max((((/* implicit */unsigned int) (unsigned char)153)), (arr_21 [i_14])))));
        var_39 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) (signed char)-24)), (min((((/* implicit */long long int) ((short) arr_32 [i_14] [i_14] [i_14]))), ((-(var_12)))))));
    }
}
