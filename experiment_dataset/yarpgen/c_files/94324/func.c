/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94324
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [(short)8] = ((/* implicit */unsigned char) min((min((((/* implicit */int) (short)-23975)), (((((/* implicit */int) (signed char)23)) / (((/* implicit */int) (signed char)23)))))), (((/* implicit */int) min(((short)511), (((/* implicit */short) (signed char)-92)))))));
        var_17 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)3100))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-511)) == (((/* implicit */int) (signed char)-23))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)511)), ((unsigned short)62435)))))), (((/* implicit */int) (unsigned short)3100))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
        {
            var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)3113)) ? (((/* implicit */int) (short)511)) : (((/* implicit */int) (short)-511))));
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((17038366896878995327ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)511)))));
            var_19 = (signed char)-23;
        }
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                arr_11 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)0)), ((short)529))))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (~(max(((-(((/* implicit */int) (signed char)-97)))), (((/* implicit */int) min(((signed char)23), ((signed char)(-127 - 1))))))))))));
                var_21 |= ((/* implicit */signed char) (short)501);
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((((/* implicit */int) min(((signed char)2), ((signed char)2)))), (((((/* implicit */int) (unsigned char)148)) >> (((((/* implicit */int) (short)4986)) - (4981))))))))));
                arr_12 [i_3] [i_0] = ((/* implicit */short) (unsigned char)251);
            }
            for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~(((/* implicit */int) (short)-483)))))));
                            var_24 = (signed char)-25;
                        }
                    } 
                } 
                arr_23 [i_4 - 1] [i_4] [i_0] = (signed char)3;
                var_25 = ((/* implicit */signed char) (short)31599);
            }
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                var_26 = ((/* implicit */signed char) (short)-501);
                arr_26 [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)(-32767 - 1))))))));
            }
            for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) min((((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))), ((short)-511)))), ((-(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)0)))))))))));
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (unsigned short)57742))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                arr_31 [i_0] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)479)) ? (9988418510941817678ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52)))));
                var_29 ^= ((/* implicit */unsigned short) (~(14417355860066006413ULL)));
            }
        }
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
        {
            arr_35 [i_0] [i_10] |= ((/* implicit */unsigned char) (signed char)55);
            /* LoopSeq 1 */
            for (short i_11 = 1; i_11 < 20; i_11 += 3) 
            {
                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)482)) || (((/* implicit */_Bool) (signed char)-85)))))));
                var_31 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-25)) != (((/* implicit */int) (signed char)-57))));
                var_32 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)55))));
                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)25404)))) && ((!(((/* implicit */_Bool) (signed char)127)))))))));
            }
        }
        arr_39 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25404)) ? (14417355860066006413ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25404)))))) ? ((~(((/* implicit */int) (signed char)-92)))) : (((/* implicit */int) (signed char)35)))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(18446744073709551615ULL)))))))));
        var_34 ^= ((/* implicit */short) max((((/* implicit */int) max(((unsigned char)170), (((/* implicit */unsigned char) (signed char)-92))))), (min((((((/* implicit */int) (signed char)92)) & (((/* implicit */int) (short)511)))), (((/* implicit */int) (!(((/* implicit */_Bool) 11175455446784296912ULL)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
    {
        arr_42 [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 7271288626925254712ULL))));
        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-1)) == (((/* implicit */int) (short)-25259)))))));
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) 
    {
        var_36 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)-8403)) ? (((/* implicit */int) (short)-475)) : (((/* implicit */int) (unsigned char)4))))));
        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (-((-(((/* implicit */int) (short)0)))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 3) 
    {
        arr_48 [i_14] = ((/* implicit */short) ((((/* implicit */int) (signed char)88)) == (((/* implicit */int) (short)482))));
        var_38 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)4095))));
    }
}
