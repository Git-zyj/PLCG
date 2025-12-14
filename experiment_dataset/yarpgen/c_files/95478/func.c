/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95478
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) var_4)))), (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) (unsigned short)52764))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_16 *= ((((/* implicit */_Bool) (unsigned short)52764)) && (((/* implicit */_Bool) (unsigned short)65535)));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [2U] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)217))))) ? (((/* implicit */int) (unsigned short)65535)) : (((arr_12 [i_0] [i_1] [i_2] [i_0] [i_4]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_0] [(unsigned short)6] [i_2] [i_3])))))) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
                            var_17 = ((/* implicit */unsigned char) (~((+(((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned short)52762))))))));
                            var_18 = ((/* implicit */unsigned char) ((var_8) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (2853186614U)))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_5 = 1; i_5 < 19; i_5 += 3) 
        {
            var_19 -= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))))) <= ((+(var_12)))));
            var_20 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))))), (((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) var_4))));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        var_21 ^= (-(((/* implicit */int) ((unsigned short) (~(var_11))))));
        var_22 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_0 [i_6])))) - (((/* implicit */int) arr_0 [i_6]))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_21 [(signed char)12] [(signed char)12] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) | (arr_19 [i_7])));
        var_23 = (-(((((/* implicit */int) arr_20 [i_7] [i_7])) + (((/* implicit */int) arr_20 [i_7] [(_Bool)1])))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 3; i_8 < 23; i_8 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-17))))) >= ((~(arr_19 [11])))));
            var_25 = ((/* implicit */long long int) arr_20 [i_7] [i_8 - 3]);
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                for (unsigned char i_10 = 1; i_10 < 21; i_10 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) ((arr_19 [i_7]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8] [(short)7] [i_10 + 3])))));
                        var_27 &= ((/* implicit */short) var_14);
                    }
                } 
            } 
        }
    }
    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 1) 
    {
        var_28 &= ((/* implicit */unsigned int) (unsigned char)187);
        arr_32 [i_11] [i_11] = ((/* implicit */unsigned long long int) min((min((max((var_12), (((/* implicit */int) var_1)))), (((/* implicit */int) arr_4 [i_11] [i_11] [i_11])))), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)20))))) ? (((var_6) & (((/* implicit */int) var_5)))) : (802964686)))));
        arr_33 [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) (((-(var_9))) == (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
    }
    var_29 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) ((unsigned short) 16191078469835176456ULL)))))));
}
