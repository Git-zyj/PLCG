/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76164
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_12 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max(((short)-29125), (((/* implicit */short) var_6)))))) | ((+(arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) (unsigned short)42445))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [(unsigned short)4]) : (-1522730644)))));
        arr_4 [i_0] = ((/* implicit */_Bool) max(((unsigned char)106), ((unsigned char)156)));
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 19; i_1 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_0 [4])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)29386)) : (((/* implicit */int) arr_5 [20LL])))) : (min((((/* implicit */int) (unsigned char)218)), (arr_2 [i_0] [0ULL])))))));
            arr_7 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)0)), ((-(((/* implicit */int) var_9))))));
            var_14 = ((/* implicit */unsigned long long int) ((unsigned char) min((arr_2 [i_1] [i_1 + 1]), (arr_2 [0U] [i_1 - 2]))));
        }
        for (signed char i_2 = 2; i_2 < 19; i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [(unsigned char)7] [i_2] = ((/* implicit */unsigned long long int) ((((unsigned long long int) var_7)) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2 + 2] [i_2] [i_2 - 2])) && (((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 + 1]))))))));
            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((unsigned long long int) max((((/* implicit */unsigned int) -1522730644)), (3450283537U)))))));
            var_16 += ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_9 [i_2 - 2] [i_2 - 1] [i_2 + 2])))));
            var_17 += ((/* implicit */unsigned long long int) ((unsigned short) min((arr_8 [i_2 - 2]), (arr_8 [i_2 - 1]))));
            var_18 = ((/* implicit */unsigned char) max((var_18), (min((((/* implicit */unsigned char) min((arr_9 [i_2 + 1] [i_2 - 2] [i_2 + 1]), (arr_9 [i_2] [i_2 - 2] [i_2 - 2])))), (((unsigned char) (+(-1522730667))))))));
        }
        var_19 = ((((/* implicit */_Bool) 3433378267235184LL)) ? (arr_6 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 432625053U)) >= (3588819060782106309ULL))))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 3) 
    {
        arr_14 [i_3] = ((((_Bool) 560156836U)) ? (var_7) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_3 - 1])) : (((var_8) + (((/* implicit */int) var_4)))))));
        var_20 = ((/* implicit */signed char) ((((long long int) arr_12 [i_3 - 1] [i_3 - 2])) > (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_3])))));
        arr_15 [i_3] = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) var_0)))));
    }
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min(((-(((15545847855149881284ULL) << (((601294956) - (601294923))))))), (((/* implicit */unsigned long long int) var_8)))))));
}
