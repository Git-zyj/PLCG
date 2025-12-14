/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81210
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
    var_17 = ((/* implicit */unsigned long long int) ((_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_15)))));
    var_18 = ((unsigned int) (unsigned short)49248);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */int) 2106040220489963407ULL);
        /* LoopSeq 3 */
        for (int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            arr_6 [i_0] [i_0 + 1] [i_0] = ((/* implicit */int) ((((unsigned int) var_9)) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16287)))));
            var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        }
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned short) ((15U) == (4294967287U)));
            arr_10 [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))));
        }
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            var_21 ^= (-(((/* implicit */int) arr_4 [i_0 - 1])));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0 - 1])) | (((/* implicit */int) (unsigned char)42)))))));
        }
        var_23 = ((/* implicit */signed char) (~(((/* implicit */int) (short)9146))));
        /* LoopSeq 3 */
        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */int) var_10))))));
            var_25 = ((/* implicit */int) ((((0ULL) <= (((/* implicit */unsigned long long int) arr_13 [i_4])))) && (var_4)));
            var_26 = ((/* implicit */unsigned int) (~(var_6)));
        }
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                arr_21 [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 19533177019341665ULL)) ? ((-(18446744073709551596ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551610ULL))))))));
                arr_22 [(signed char)8] [i_5] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1104729768U))));
            }
            var_27 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2]))) == (var_11)));
        }
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
        {
            arr_27 [i_0 + 2] [i_7] = ((/* implicit */unsigned char) ((((var_6) < (((/* implicit */unsigned long long int) -746443855)))) ? (((((/* implicit */_Bool) var_9)) ? (arr_17 [i_0] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
            /* LoopSeq 2 */
            for (unsigned short i_8 = 1; i_8 < 9; i_8 += 3) /* same iter space */
            {
                arr_32 [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) var_1))) - (((unsigned long long int) arr_20 [i_8] [i_8]))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_8] [i_7] [i_8])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_8 + 1]))));
            }
            for (unsigned short i_9 = 1; i_9 < 9; i_9 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_9 - 1])) ? (var_13) : (3U))))));
                arr_35 [i_0] [i_7] [i_9 + 1] [i_9 + 1] &= ((/* implicit */signed char) ((unsigned int) var_13));
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0 + 1] [i_0 + 3])) || (((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0 - 1] [i_0 - 1]))));
            }
        }
    }
    for (unsigned short i_10 = 1; i_10 < 7; i_10 += 3) /* same iter space */
    {
        arr_38 [i_10] = (!(((/* implicit */_Bool) 18446744073709551596ULL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_11 = 4; i_11 < 9; i_11 += 3) 
        {
            arr_42 [i_11] [i_10] [i_11] = arr_34 [i_11] [i_11] [i_11] [i_11];
            /* LoopSeq 2 */
            for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) arr_3 [i_10] [(unsigned char)3] [i_10])))))));
                var_32 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_19 [i_11] [i_11 - 3] [i_11]))));
                arr_45 [i_11] = ((/* implicit */unsigned long long int) var_1);
            }
            for (unsigned char i_13 = 3; i_13 < 9; i_13 += 3) 
            {
                arr_49 [i_10] [i_11] [i_11] [i_13] = ((/* implicit */signed char) 18446744073709551585ULL);
                var_33 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)0)) ? (arr_2 [i_10]) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                var_34 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (arr_2 [i_11 - 4])));
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 1; i_14 < 8; i_14 += 4) 
                {
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) == (2147483647)));
                    arr_54 [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) 614781751)) ? (((var_16) ? (2106040220489963400ULL) : (16340703853219588208ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 4294967287U))))));
                }
                /* LoopSeq 4 */
                for (unsigned int i_15 = 0; i_15 < 10; i_15 += 3) 
                {
                    arr_57 [i_10] [i_10] [i_13 - 3] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)15)) : (arr_52 [i_11] [i_11] [i_11 - 2] [i_11 - 1] [i_11 + 1])));
                    arr_58 [i_11] = ((/* implicit */signed char) var_15);
                }
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    arr_61 [i_10] [i_11] [i_13 - 2] [i_16] = ((unsigned short) var_9);
                    arr_62 [i_13 + 1] [0U] [0U] [i_13] |= ((/* implicit */unsigned long long int) 4294967287U);
                }
                for (unsigned int i_17 = 0; i_17 < 10; i_17 += 3) /* same iter space */
                {
                    arr_65 [i_11] = ((/* implicit */unsigned char) (+(arr_5 [i_11 - 4])));
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((865681476U) >> (((((/* implicit */int) (unsigned char)200)) - (198)))))) && (((/* implicit */_Bool) 722984188U))));
                }
                for (unsigned int i_18 = 0; i_18 < 10; i_18 += 3) /* same iter space */
                {
                    arr_68 [i_11] = ((int) arr_37 [i_10 + 2]);
                    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) arr_46 [i_10] [8U]))));
                }
            }
            var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 197568122U)) || (((/* implicit */_Bool) arr_36 [(unsigned char)2]))))) >> (((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) (_Bool)1)) : (var_3)))));
            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((_Bool) arr_4 [i_10 - 1])))));
        }
    }
    for (unsigned short i_19 = 1; i_19 < 7; i_19 += 3) /* same iter space */
    {
        var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_19 + 2])) ? (max((var_13), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_26 [i_19 + 2]))))))))));
        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) max((min((((((/* implicit */_Bool) 1147958528)) ? (((/* implicit */unsigned int) var_5)) : (var_0))), (3035003222U))), ((+(1259964074U))))))));
        arr_71 [i_19] = ((/* implicit */int) (short)32765);
        var_42 = ((/* implicit */int) var_14);
        var_43 = ((/* implicit */int) (-(1947259026U)));
    }
    for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 1) 
    {
        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((unsigned char) min((arr_73 [i_20]), (arr_72 [i_20])))))));
        var_45 = ((/* implicit */unsigned short) ((min((((int) var_2)), (((arr_73 [i_20]) + (var_1))))) | (((((arr_73 [i_20]) + (2147483647))) << (((((var_16) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) - (132U)))))));
    }
}
