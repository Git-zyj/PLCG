/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89867
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
    var_17 = ((/* implicit */unsigned int) 16043545094974990129ULL);
    var_18 = ((/* implicit */short) ((int) max(((short)1231), (((/* implicit */short) ((_Bool) var_9))))));
    var_19 = ((/* implicit */signed char) max((min((min((16043545094974990101ULL), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-16635)) * (((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) var_0))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */short) ((_Bool) 0ULL)))))) ? (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))) : (min((((/* implicit */unsigned long long int) (short)-12131)), (6393526516659154753ULL))))) : (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) var_5)), (1289043152U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0]))))) ? (max((((/* implicit */int) arr_1 [i_0 + 1] [i_0])), ((~(((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((/* implicit */int) var_16))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((short) arr_5 [i_0 - 1]))) && (((/* implicit */_Bool) arr_4 [i_1] [i_0 - 1])))));
            arr_8 [i_0 - 1] [i_0] [i_1] = ((((/* implicit */_Bool) ((int) min((arr_7 [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_1 + 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((min((3360359539U), (((/* implicit */unsigned int) (_Bool)1)))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) -899626891)) ? (899626891) : (((/* implicit */int) (unsigned short)49152))))))))) : (min((var_15), (((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_0 + 1])), (arr_4 [i_0] [i_1 - 1])))))));
            var_23 ^= ((/* implicit */unsigned char) min(((-((-(((/* implicit */int) var_12)))))), (((/* implicit */int) arr_0 [i_0 + 1] [i_1]))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            arr_11 [8LL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [20])) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) (unsigned char)89))))) ? (((/* implicit */int) arr_10 [i_2] [i_0])) : (var_3)));
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0])) & (((((/* implicit */int) var_1)) << (((((/* implicit */int) (signed char)-1)) + (17)))))));
            arr_13 [i_0 + 1] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_0 - 1])) ? (((/* implicit */unsigned long long int) 1454617586)) : (var_13)))) ? (((((/* implicit */_Bool) -1210279279)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned char)127))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)12131)) && (((/* implicit */_Bool) arr_6 [i_3 - 1] [i_3 + 1] [i_3 + 1]))));
        /* LoopSeq 1 */
        for (short i_4 = 1; i_4 < 17; i_4 += 3) 
        {
            arr_18 [i_4] [i_4 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_16)))));
            var_25 = arr_1 [i_4] [i_4];
            arr_19 [i_3] [i_4] = arr_5 [i_3 + 1];
        }
        var_26 = ((/* implicit */unsigned int) ((_Bool) arr_5 [i_3 + 1]));
        var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [(unsigned short)2])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_5] [14U])) ? (((/* implicit */int) arr_0 [i_5] [(unsigned char)18])) : (((/* implicit */int) arr_6 [i_5 - 1] [i_5] [i_5 - 1])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_5 - 1]))))))))));
        var_29 &= (~(((/* implicit */int) ((short) arr_21 [i_5 - 1]))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 4394622967521930134ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-19)) < (899626900))))) : (3394890005U)))) ? (((/* implicit */int) (short)-12132)) : ((((_Bool)1) ? (899626891) : (((/* implicit */int) (_Bool)1))))));
        var_31 = ((/* implicit */long long int) 1664517696);
    }
    for (short i_6 = 2; i_6 < 17; i_6 += 2) 
    {
        arr_25 [i_6] = arr_9 [i_6] [i_6];
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((arr_24 [i_6]), (((/* implicit */short) (_Bool)1))))))) : (900077276U))))));
    }
}
