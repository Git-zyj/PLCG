/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88145
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
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 6; i_1 += 4) 
        {
            arr_4 [i_1] [i_1] = ((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_1])), (15283324596464125882ULL))));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */long long int) 15283324596464125882ULL);
                var_19 = arr_0 [i_1 - 1];
                var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_1] [i_1 + 2] [i_1 + 3] [i_1 + 3]))));
            }
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_0 [i_0 - 2]), (((/* implicit */unsigned short) (unsigned char)25))))), (min((arr_7 [i_3] [i_1 + 2] [i_0 + 1] [i_1]), (arr_7 [i_3] [i_1 - 1] [i_3] [(_Bool)1])))));
                var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (signed char)-32)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (((/* implicit */_Bool) (signed char)-32))))) : (((((/* implicit */_Bool) min(((short)6521), (((/* implicit */short) var_4))))) ? (((((/* implicit */_Bool) (short)20600)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((short) -1221881064)))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_13 [i_1] [i_1] [6] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))) & (3163419477245425718ULL))), (((/* implicit */unsigned long long int) ((unsigned short) (((_Bool)1) ? (16456067074706818630ULL) : (((/* implicit */unsigned long long int) 6448094639707483899LL))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    arr_16 [i_5] [i_5] [i_5] [i_1] [2LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) ((signed char) (signed char)127)))));
                    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16))));
                }
                arr_17 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) min(((_Bool)1), (((((/* implicit */int) var_4)) != (((/* implicit */int) var_10))))))) : (((/* implicit */int) var_2))));
            }
        }
        for (short i_6 = 2; i_6 < 6; i_6 += 3) 
        {
            arr_20 [i_6] [i_6] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 687138585)) ? (((/* implicit */int) (unsigned short)59097)) : (((/* implicit */int) var_16))))), (((((/* implicit */_Bool) 2642018009226696688LL)) ? (11033581478975427177ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224)))))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) var_4)))), (((((/* implicit */_Bool) (unsigned short)13910)) || (((/* implicit */_Bool) 576460477425516544LL))))))) : (((/* implicit */int) arr_19 [i_6] [i_6] [i_6])));
            arr_21 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_12 [i_6] [i_6 - 2] [i_0 - 2] [i_6])) : (((/* implicit */int) arr_12 [i_6] [i_6 + 1] [i_0 + 1] [i_6]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((-576460477425516545LL) != (((/* implicit */long long int) var_14)))))));
            arr_22 [i_6] = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) var_9)) & (7037799992492190613ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) arr_3 [i_6] [i_6] [i_0 + 2])) : (((/* implicit */int) arr_3 [i_6] [i_6 - 2] [i_0 + 2])))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 3; i_7 < 9; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)79)) || (((/* implicit */_Bool) min((541165879296ULL), (((/* implicit */unsigned long long int) 576460477425516559LL))))))))));
                        var_25 = ((/* implicit */int) -2642018009226696689LL);
                    }
                } 
            } 
            arr_31 [i_0] = ((/* implicit */short) ((unsigned int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (289653827U))));
        }
        var_26 = ((/* implicit */unsigned int) var_0);
    }
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            {
                var_27 = ((int) 1774157227);
                /* LoopNest 3 */
                for (short i_12 = 4; i_12 < 12; i_12 += 2) 
                {
                    for (unsigned long long int i_13 = 1; i_13 < 12; i_13 += 1) 
                    {
                        for (int i_14 = 2; i_14 < 10; i_14 += 4) 
                        {
                            {
                                arr_44 [i_10] [i_12] [i_12] [i_12] [i_14] [i_14] [i_14 - 1] &= ((/* implicit */unsigned char) (+((~(((/* implicit */int) min((var_2), (((/* implicit */unsigned char) (signed char)15)))))))));
                                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((arr_39 [i_10] [i_11] [i_10]), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)50877)) / (((/* implicit */int) (signed char)16))))) : (((((/* implicit */_Bool) 3467308060U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_11] [i_13 - 1] [i_11]))) : (-9094958631116350182LL))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 289653835U)) ? (((/* implicit */unsigned int) 1507010670)) : (2147483647U))) * (var_5)))))))));
                                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                } 
                arr_45 [i_10] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (_Bool)1)) : (1663989641)))) : (3470687941930793086ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-16))))) ? (((/* implicit */int) ((arr_32 [i_11]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9135)))))) : (((/* implicit */int) arr_34 [i_10] [i_10])))))));
                var_30 = ((/* implicit */signed char) arr_39 [i_10] [i_11] [i_11]);
            }
        } 
    } 
    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3694550627290051949LL)) || (((/* implicit */_Bool) 4294967232U)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) max((((/* implicit */short) (signed char)-16)), ((short)-25353))))))) : ((+((~(3ULL)))))));
}
