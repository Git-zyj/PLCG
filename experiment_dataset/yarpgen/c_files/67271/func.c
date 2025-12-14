/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67271
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0]))))), (arr_0 [i_0])));
        var_14 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)211);
        arr_6 [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)210);
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) (_Bool)1);
        /* LoopSeq 3 */
        for (long long int i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)109))) : (-1071406602746090108LL))) == (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))))))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (signed char i_5 = 1; i_5 < 10; i_5 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) 63LL);
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (short)-30012))));
                            var_18 = ((/* implicit */unsigned char) max(((~(arr_2 [i_5 + 1]))), (((/* implicit */unsigned long long int) ((4210886028787404932ULL) >= (arr_2 [i_5 - 1]))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    var_19 = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) (unsigned short)61095)) ? (3019750662670159452ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109))))))) * (((/* implicit */unsigned long long int) ((long long int) min((3036454482565703205LL), (((/* implicit */long long int) var_12))))))));
                    var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (max((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) arr_22 [i_1] [i_1] [i_1] [i_1]))))))), (((((/* implicit */_Bool) (unsigned char)126)) ? (11822575921423815787ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9585)))))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-9583))) & (576460752295034880LL)));
                    var_22 -= ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                }
                /* vectorizable */
                for (signed char i_7 = 1; i_7 < 9; i_7 += 3) 
                {
                    var_23 += 0LL;
                    arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-32743)))))));
                }
                for (unsigned long long int i_8 = 4; i_8 < 10; i_8 += 3) 
                {
                    arr_29 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((int) max((arr_27 [i_8 - 3] [i_2 - 1] [i_2 - 1] [i_8 - 3]), (arr_27 [i_8 - 2] [i_2 + 1] [i_8 - 2] [i_8 - 2]))));
                    var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551601ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0U)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) ((unsigned char) 2260490852602830613LL))))))) : (-72LL)));
                }
            }
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                for (int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        {
                            arr_38 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)59))));
                            var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_2] [i_2] [i_2 - 1] [i_2])) * (((/* implicit */int) arr_13 [i_2] [i_2] [i_2 + 1] [i_2]))))), (16383ULL)));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 3) 
        {
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (-(((/* implicit */int) (short)-17561)))))) ? (((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1])) ? (arr_16 [i_1] [i_1] [i_1] [i_1]) : ((~(8ULL))))) : ((+(max((((/* implicit */unsigned long long int) (signed char)-106)), (18446744073709551590ULL)))))));
            arr_41 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) 4611686018427387904ULL);
        }
        for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 2) 
        {
            arr_44 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) 43LL);
            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_1] [i_1])))))));
            arr_45 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1] [i_1])) << (((5916950378583674425LL) - (5916950378583674424LL)))))), (9005195036685353315LL)))) ? ((~((-(arr_40 [i_1] [i_1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)56))))))));
            var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)68))));
        }
    }
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 11; i_14 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)56))));
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-30004)) ? (((((/* implicit */long long int) ((/* implicit */int) var_12))) & (arr_17 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))) : (((/* implicit */long long int) ((((/* implicit */int) (short)29227)) >> (((arr_0 [i_14]) + (8257388285603010038LL))))))));
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_48 [i_14])) : (((/* implicit */int) arr_48 [i_14]))));
    }
    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29989))) ^ (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)7)) == (((/* implicit */int) var_11))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 5916950378583674433LL)))) : (((((/* implicit */_Bool) max((var_6), (-5529343120430584976LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222))) : (var_0)))));
}
