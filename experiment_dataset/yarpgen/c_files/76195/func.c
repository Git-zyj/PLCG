/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76195
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((unsigned long long int) (_Bool)1))));
                arr_7 [10U] [10U] |= ((/* implicit */long long int) ((((unsigned int) (short)-31997)) >> (((/* implicit */int) ((_Bool) ((unsigned short) arr_5 [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 2; i_2 < 19; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_15))))))));
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) (((+(var_7))) > (((/* implicit */unsigned long long int) ((long long int) (short)-32000)))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((short) arr_8 [i_2] [11])))) <= (((((/* implicit */int) arr_8 [i_2] [i_2 + 2])) + ((-(((/* implicit */int) (short)32007)))))))))));
        arr_13 [i_2] [0ULL] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) var_1)))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
                    {
                        var_21 = (~(-1518868040175125170LL));
                        var_22 += ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) 9543795556689465098ULL))) != (((/* implicit */int) ((short) arr_21 [(short)8])))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9543795556689465099ULL)))))));
                        var_25 = ((/* implicit */unsigned char) ((_Bool) arr_18 [i_4]));
                    }
                    /* LoopSeq 1 */
                    for (int i_8 = 2; i_8 < 18; i_8 += 3) 
                    {
                        arr_34 [(_Bool)1] &= ((/* implicit */short) (-(arr_23 [4U] [4U])));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((unsigned short) (short)-4407)))));
                    }
                }
            } 
        } 
        var_27 = ((((/* implicit */int) var_5)) - (var_17));
    }
    for (long long int i_9 = 1; i_9 < 13; i_9 += 3) 
    {
        arr_37 [i_9] [i_9] = ((((unsigned int) (short)-32007)) != (((/* implicit */unsigned int) ((/* implicit */int) ((9543795556689465082ULL) != (8902948517020086517ULL))))));
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (-(((((/* implicit */int) (short)-4407)) | (((/* implicit */int) (unsigned short)3785)))))))));
        var_29 -= (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
        var_30 += ((/* implicit */unsigned int) ((unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) + (2178976681555003579LL))) + (((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))))));
    }
    var_31 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
    var_32 -= ((/* implicit */int) ((((/* implicit */int) ((signed char) (-(((/* implicit */int) var_5)))))) != (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-31997)) + (2147483647))) << (((8265947108513811935ULL) - (8265947108513811935ULL)))))) && (((/* implicit */_Bool) ((long long int) 4277289414451789713ULL))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_10 = 4; i_10 < 24; i_10 += 3) 
    {
        var_33 = ((/* implicit */unsigned short) ((unsigned int) ((var_7) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
        var_34 -= ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-31971))) > (var_16)))) ^ (((((/* implicit */int) ((unsigned char) var_8))) * (((/* implicit */int) ((short) 479973156150190553ULL))))));
        var_35 -= ((/* implicit */long long int) (-(((/* implicit */int) ((var_16) >= (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
    }
}
