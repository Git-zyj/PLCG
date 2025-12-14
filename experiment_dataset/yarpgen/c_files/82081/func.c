/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82081
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
    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14)))) > (var_5))))));
    var_17 = ((/* implicit */long long int) var_10);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            var_18 *= ((/* implicit */signed char) ((max((var_7), (((/* implicit */unsigned long long int) var_15)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) < (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
            var_19 -= ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
            var_20 -= ((/* implicit */long long int) var_5);
            var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((var_7) >= (var_7)))), ((-(var_4)))));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_1), (var_1)))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (var_15)))))))));
        }
        /* vectorizable */
        for (signed char i_2 = 1; i_2 < 16; i_2 += 2) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) ((var_8) >> ((((+(((/* implicit */int) var_12)))) - (10987)))));
            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
        }
        /* vectorizable */
        for (signed char i_3 = 1; i_3 < 16; i_3 += 2) /* same iter space */
        {
            arr_10 [i_0] [i_3] = ((/* implicit */int) ((var_15) + (((/* implicit */long long int) ((/* implicit */int) var_1)))));
            var_24 = (+(((/* implicit */int) var_13)));
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
        }
        var_26 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_15)))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                for (unsigned char i_6 = 1; i_6 < 15; i_6 += 1) 
                {
                    for (short i_7 = 2; i_7 < 17; i_7 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */short) (+(min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_0)))))))));
                            var_28 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))));
                            var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_4)) : (var_3))))));
                            var_30 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_3)))) ? (((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((((int) var_9)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) != (var_3)))))))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_12))))));
            var_32 = ((/* implicit */short) (~((+(((/* implicit */int) var_6))))));
            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((min((((/* implicit */long long int) var_11)), (var_8))) * (((/* implicit */long long int) ((/* implicit */int) ((var_10) < (((/* implicit */int) var_12)))))))))));
        }
        var_34 = ((/* implicit */unsigned char) (+((-(((((/* implicit */long long int) var_10)) / (var_8)))))));
    }
    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        var_35 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
        var_36 = (+(max((((/* implicit */unsigned int) var_12)), (var_4))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
    {
        var_37 = ((/* implicit */int) (~((+(var_4)))));
        var_38 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((var_15) + (9223372036854775807LL))) >> (((/* implicit */int) ((_Bool) var_12)))))) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((var_9), (((/* implicit */unsigned long long int) var_1))))))));
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_8)))) ? (((unsigned int) var_14)) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((var_7) < (((/* implicit */unsigned long long int) var_5))))))))));
            var_40 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
            var_41 = (+((-(((/* implicit */int) var_11)))));
            var_42 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
            arr_28 [i_10] = ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (var_3))));
        }
        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 1) 
        {
            var_43 = ((/* implicit */unsigned int) (((((+(var_15))) + (9223372036854775807LL))) >> (((var_8) - (2302589572462646069LL)))));
            arr_31 [i_9] [i_11] = ((/* implicit */long long int) ((unsigned int) ((var_9) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_2))))))));
            var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? ((((+(var_8))) << (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_10))))))) : (((/* implicit */long long int) ((((/* implicit */int) min((var_13), (((/* implicit */unsigned short) var_14))))) + ((-(((/* implicit */int) var_2)))))))));
            var_45 *= max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_6))))));
            var_46 = ((max(((~(var_5))), (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */int) var_1)))))) >> (((((((/* implicit */_Bool) var_5)) ? ((~(var_5))) : (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */int) var_2)))))) + (365433401))));
        }
    }
}
