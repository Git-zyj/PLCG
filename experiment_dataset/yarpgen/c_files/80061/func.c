/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80061
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
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_12 = ((/* implicit */_Bool) ((unsigned long long int) ((9223372036854775807LL) << (((((/* implicit */int) (_Bool)1)) - (1))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) ((unsigned short) (signed char)-89));
        arr_7 [i_1 - 1] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_3 = 1; i_3 < 10; i_3 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((short) 6745199715157936388ULL)))));
            var_15 *= ((/* implicit */short) ((unsigned int) (_Bool)1));
        }
        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 4) /* same iter space */
        {
            arr_16 [i_2] [i_2] [i_2] = ((unsigned short) 9223372036854775807LL);
            var_16 ^= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-18250)) + (18268)))));
        }
        arr_17 [i_2] [i_2] = ((/* implicit */long long int) (_Bool)1);
    }
    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 2) /* same iter space */
    {
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1))))))), (((unsigned long long int) (short)-20916))));
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            var_17 -= max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)204)), ((unsigned short)55005)))), ((+(((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))));
            var_18 = ((/* implicit */short) ((long long int) ((unsigned long long int) -3394186328314435500LL)));
            arr_24 [i_6] [i_6] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) min((((/* implicit */long long int) (_Bool)1)), (-8796093022208LL)))))));
        }
        for (long long int i_7 = 3; i_7 < 8; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 148270048U)), (14962212985459265713ULL)))) && (((/* implicit */_Bool) ((signed char) 0U))))))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (unsigned short)19518))));
                }
                arr_33 [i_5] [i_5 - 1] = ((/* implicit */unsigned char) (-2147483647 - 1));
            }
            /* vectorizable */
            for (signed char i_10 = 4; i_10 < 9; i_10 += 4) 
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (unsigned short)44874))) & (((/* implicit */int) (!((_Bool)1))))));
                var_22 *= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
            }
            arr_36 [i_5] [i_7] = (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)65))))));
            var_23 += ((/* implicit */signed char) ((unsigned char) min((((_Bool) (unsigned short)2776)), (((_Bool) (unsigned short)62752)))));
        }
    }
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((min(((-(13ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))) << (((3037645280U) - (3037645238U))))))));
    var_25 |= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 7474599163216636124LL))))) >= (((/* implicit */int) min(((signed char)-37), (((/* implicit */signed char) (_Bool)1))))))));
    var_26 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)1))));
    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) var_11))));
}
