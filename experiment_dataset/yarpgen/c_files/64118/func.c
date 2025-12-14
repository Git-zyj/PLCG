/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64118
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    arr_7 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 784930488U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (3510036799U)))));
                    arr_8 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) -1594792894764109067LL)) ? (0ULL) : (((/* implicit */unsigned long long int) 784930485U))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 3510036807U)) && (((/* implicit */_Bool) 784930488U))));
                                var_20 = ((/* implicit */unsigned long long int) (unsigned char)233);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 2) 
                    {
                        arr_17 [i_1] [i_2] = ((/* implicit */long long int) (+(var_18)));
                        arr_18 [i_0] [i_0] [i_2] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 784930496U)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (signed char)-115))))) ? (((-5227483507544561901LL) / (((/* implicit */long long int) -338083816)))) : (((/* implicit */long long int) 784930511U))));
                    }
                }
                arr_19 [i_0] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (784930465U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30276)))))))) ? (((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [18] [i_0] [i_0] [18] [i_0]))))) : ((+(arr_0 [i_0]))));
                var_21 = ((/* implicit */long long int) min((var_21), ((+(max((((-5227483507544561883LL) | (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)252)))))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_6 = 3; i_6 < 18; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            var_22 |= ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) arr_22 [i_6 - 1])));
            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_6 + 2]))));
        }
        for (int i_8 = 2; i_8 < 16; i_8 += 1) 
        {
            arr_31 [i_6 - 1] [i_6] [i_6] = (-(arr_13 [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_6 - 1] [i_8 + 3] [i_8 + 2] [i_6 - 3]));
            var_24 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
        }
        var_25 |= (+(((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6 - 1]))) : (603826190U))));
        arr_32 [i_6] [i_6] = ((/* implicit */unsigned long long int) (+(338083812)));
    }
    for (signed char i_9 = 3; i_9 < 18; i_9 += 2) /* same iter space */
    {
        var_26 = 127ULL;
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            for (unsigned int i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                {
                    var_27 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) 568649702U)) : (16822806616750303676ULL)));
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) arr_38 [i_9 + 2] [i_9 + 2] [i_9 + 1]))));
                    arr_42 [i_9] [i_10] [i_11] = ((/* implicit */unsigned int) min(((+((+(((/* implicit */int) (unsigned char)83)))))), ((((-(((/* implicit */int) arr_9 [i_9] [i_11] [i_11])))) * ((-(((/* implicit */int) arr_3 [i_9 - 1]))))))));
                    var_29 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) (unsigned char)21))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)60))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_9 - 2])) && (((/* implicit */_Bool) var_1)))))))));
                }
            } 
        } 
        arr_43 [i_9] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)30276)) | (((/* implicit */int) arr_3 [i_9 + 2])))) != ((+(((/* implicit */int) (unsigned char)76))))));
    }
    for (signed char i_12 = 3; i_12 < 18; i_12 += 2) /* same iter space */
    {
        arr_47 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16822806616750303686ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_37 [i_12 - 3] [i_12 - 3] [i_12 - 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_12] [i_12 - 1]))))))) : (max((0ULL), (((/* implicit */unsigned long long int) (signed char)115))))));
        var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(5227483507544561886LL))))));
    }
    for (unsigned char i_13 = 1; i_13 < 21; i_13 += 1) 
    {
        var_31 = ((/* implicit */unsigned int) 1939862448);
        var_32 = ((/* implicit */long long int) ((short) (~(((/* implicit */int) (unsigned char)11)))));
    }
    var_33 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_10))))))));
}
