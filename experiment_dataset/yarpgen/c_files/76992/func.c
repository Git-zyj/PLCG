/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76992
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) ((arr_1 [i_0] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((var_10), (((/* implicit */unsigned long long int) (unsigned char)1)))))))));
        var_19 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)56489)))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) var_16);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            arr_9 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) var_17);
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 2; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_20 = min((((/* implicit */unsigned long long int) var_6)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17171741441604975297ULL))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_14), (var_16)))), (var_13)))) ? (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) >= (((/* implicit */int) (unsigned short)55685)))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)4095)) ^ (((/* implicit */int) (_Bool)1))))), (var_8)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            var_22 *= ((/* implicit */unsigned short) arr_3 [i_1]);
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) >> (((4261674106U) - (4261674097U)))));
            /* LoopSeq 2 */
            for (unsigned char i_7 = 2; i_7 < 11; i_7 += 1) 
            {
                arr_22 [i_1] [i_1] [i_7] = min((min((var_7), (((/* implicit */unsigned int) arr_21 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1])))), (((unsigned int) (-(((/* implicit */int) (_Bool)1))))));
                var_24 ^= ((/* implicit */unsigned char) arr_14 [0U]);
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)47239))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_21 [i_6] [6U] [6U] [i_9]))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)27))) * (0ULL))))) ^ (arr_19 [i_9]))))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18297)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1856851449448184546ULL)));
                            var_28 = ((/* implicit */unsigned short) (((!(var_4))) ? (min((((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)0)))), (max((((/* implicit */unsigned long long int) 141367181U)), (576460752303423488ULL))))) : (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_2)), (arr_0 [i_8] [i_8]))) * (((/* implicit */unsigned int) ((/* implicit */int) min((var_16), (var_4))))))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(var_3))))));
            }
            /* vectorizable */
            for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                var_30 *= ((/* implicit */signed char) (unsigned char)216);
                arr_32 [i_10] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) / (((((/* implicit */_Bool) (unsigned char)226)) ? (var_1) : (var_8)))));
                var_31 = arr_16 [i_1] [i_1] [i_6] [i_1] [i_10] [i_1];
            }
        }
        var_32 *= var_7;
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        arr_35 [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) min((arr_28 [0U] [0U] [i_11] [i_11] [i_11]), (((/* implicit */unsigned int) (unsigned short)44256)))))) | (((((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) var_11)))) >> (((1569249182U) - (1569249164U)))))));
        var_33 = ((/* implicit */signed char) (((((_Bool)1) ? ((+(12U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_11)), (var_6))))))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32)))));
        var_34 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_7)) ? (arr_31 [i_11] [i_11] [(unsigned short)10] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_11] [i_11]))))), (((/* implicit */unsigned long long int) min((((_Bool) (_Bool)1)), (((((/* implicit */_Bool) var_6)) || (arr_11 [i_11] [i_11] [(unsigned short)2] [i_11]))))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_12 = 4; i_12 < 9; i_12 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_13 = 2; i_13 < 7; i_13 += 4) 
        {
            var_35 *= ((/* implicit */unsigned int) ((unsigned short) ((unsigned long long int) (+(var_12)))));
            var_36 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (3258030359U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29)))));
        }
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 2) 
        {
            arr_43 [(_Bool)1] [i_14] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) var_4)) : (arr_19 [i_14])));
            /* LoopNest 2 */
            for (unsigned char i_15 = 1; i_15 < 9; i_15 += 3) 
            {
                for (unsigned short i_16 = 4; i_16 < 6; i_16 += 2) 
                {
                    {
                        arr_49 [i_12] [i_14] [i_14] [(unsigned short)4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_12]))))) | ((~(var_1)))));
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (arr_33 [i_12 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)114))))))));
                        var_38 *= var_3;
                        /* LoopSeq 1 */
                        for (unsigned long long int i_17 = 1; i_17 < 6; i_17 += 2) 
                        {
                            var_39 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_37 [i_17 + 3])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                            arr_52 [i_17] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)44256)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((unsigned int) var_4))));
                            arr_53 [i_12] [i_17] = ((((/* implicit */int) (!(((/* implicit */_Bool) 11U))))) <= (((((/* implicit */int) var_6)) | (((/* implicit */int) (signed char)-75)))));
                            arr_54 [i_12] [i_12] [i_17] = ((/* implicit */signed char) ((4294967274U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-67)))));
                        }
                    }
                } 
            } 
            var_40 = ((((/* implicit */int) (_Bool)1)) == ((+(((/* implicit */int) (_Bool)1)))));
            arr_55 [i_14] [i_14] = var_16;
        }
        for (signed char i_18 = 0; i_18 < 10; i_18 += 1) 
        {
            arr_59 [i_12] [i_12] [i_18] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47239)) ? (((/* implicit */int) arr_34 [i_12])) : (((/* implicit */int) (_Bool)1)))))))), (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57344))) : (var_13))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) var_0)))))))));
            var_41 = ((/* implicit */unsigned short) 0U);
            var_42 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_2)), (((signed char) 2408862804U))));
            arr_60 [i_12] = min((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)216)))))))), (min((arr_40 [i_12 + 1] [i_12 + 1]), (((/* implicit */unsigned int) var_6)))));
        }
        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_15)))))))) ? (((((/* implicit */int) (unsigned short)55547)) & (((/* implicit */int) (!(((/* implicit */_Bool) 15649687069957865580ULL))))))) : (((/* implicit */int) (_Bool)1))));
    }
    var_44 = (((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19))) : (1742791924U))) == (((/* implicit */unsigned int) ((/* implicit */int) var_16))));
    var_45 = ((/* implicit */_Bool) (+(min((var_7), (((/* implicit */unsigned int) (unsigned short)47245))))));
}
