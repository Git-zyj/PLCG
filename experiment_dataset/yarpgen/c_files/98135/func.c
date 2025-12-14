/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98135
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)10547)))))) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (((((/* implicit */long long int) arr_1 [i_0] [i_0])) / (-1096447933441431179LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
        {
            arr_5 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-20872), (((/* implicit */short) var_6)))))) : (0U))), (((((/* implicit */_Bool) (short)-20850)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-20872), (((/* implicit */short) arr_0 [i_1] [i_0])))))) : (arr_1 [i_1] [i_0])))));
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((signed char) arr_3 [i_1] [i_0] [i_0])), (((/* implicit */signed char) ((var_10) != (((/* implicit */long long int) ((/* implicit */int) var_0))))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0] [i_1]))));
        }
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) min(((-(arr_2 [i_2]))), (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_4 [i_2])))) & (((/* implicit */int) arr_6 [i_2] [i_0])))))));
            var_17 = ((/* implicit */unsigned char) ((((arr_7 [i_0] [i_0] [i_2]) < (((/* implicit */long long int) ((/* implicit */int) (short)-20872))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_0]))) + (arr_7 [i_0] [i_2] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_2] [i_2] [i_0]) < (arr_2 [i_0])))))));
            arr_8 [i_2] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) min((arr_1 [i_2] [i_0]), (arr_1 [i_2] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (var_2) : (((/* implicit */int) (short)-4989))))) : (max((((/* implicit */long long int) var_8)), (var_3)))))));
        }
        for (int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            arr_11 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((short) (-(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (arr_3 [i_0] [i_3] [i_3]) : (((/* implicit */int) (unsigned char)57)))))));
            var_18 = ((/* implicit */short) (((-(((/* implicit */int) arr_10 [i_3] [i_0])))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_0]))) == (405711768U))))));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) (~(var_3)));
                        var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((((/* implicit */int) var_1)) - (587264570)))))), ((+(var_3)))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? ((+(((/* implicit */int) arr_0 [i_4] [i_5])))) : ((~(((/* implicit */int) arr_12 [i_0] [i_3] [i_4]))))));
                        arr_18 [i_0] [i_3] [i_4] [i_5] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_12 [i_5] [i_3] [i_0])) ? ((+(((/* implicit */int) (unsigned char)74)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))))));
                    }
                } 
            } 
        }
        var_22 -= ((/* implicit */long long int) min((var_4), (((/* implicit */short) (_Bool)1))));
        arr_19 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */int) ((((/* implicit */int) (unsigned char)182)) > (((/* implicit */int) arr_10 [i_0] [i_0]))))) & (((/* implicit */int) (unsigned char)0))))));
    }
    var_23 ^= ((/* implicit */short) (+(((((/* implicit */int) var_6)) + (((((/* implicit */_Bool) var_9)) ? (2095104) : (-1144365956)))))));
    /* LoopSeq 2 */
    for (unsigned short i_6 = 3; i_6 < 19; i_6 += 2) 
    {
        var_24 = arr_22 [i_6] [i_6 + 2];
        arr_23 [i_6 - 1] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_22 [i_6 + 2] [i_6 + 1]) : (arr_22 [i_6 - 3] [i_6 + 2]))));
    }
    for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        arr_26 [i_7] = ((/* implicit */int) -1LL);
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned int) ((((/* implicit */int) (short)13486)) & (-587264571)))) + (arr_9 [i_7] [i_7] [i_7]))) : (arr_9 [i_7] [i_7] [i_7]))))));
        var_26 = ((/* implicit */int) (-(var_10)));
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            for (int i_9 = 3; i_9 < 16; i_9 += 2) 
            {
                {
                    arr_34 [i_9 - 1] [i_8] [i_7] [i_7] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_7] [i_8] [i_9 + 3] [i_7])) ? (((/* implicit */int) ((signed char) -2095105))) : (((/* implicit */int) var_12))))), (2580009698132739581ULL));
                    arr_35 [i_9] [i_9 - 2] [i_8] [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_9] [i_8] [i_7])) ? (((/* implicit */int) arr_13 [i_9] [i_8])) : (-68749596)))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) max((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_7] [i_7] [i_7])) ? (arr_1 [i_7] [i_7]) : (((/* implicit */unsigned int) 2147483629))))) - (((((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_10))))), ((~(min((((/* implicit */long long int) arr_29 [i_7] [i_7] [i_7])), (var_3))))))))));
    }
}
