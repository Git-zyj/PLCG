/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5959
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
    var_16 = ((/* implicit */short) var_8);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_6 [i_1] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((long long int) 1616422413720878093LL)))));
                    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) + (min((arr_2 [i_2 - 2]), (((/* implicit */unsigned int) var_9))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) var_14);
        var_20 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))), (arr_0 [i_0]))) - (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))) * (((((/* implicit */_Bool) 179660899)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) : (var_11))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54097)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (min((var_12), (((/* implicit */unsigned long long int) arr_11 [i_3]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) arr_11 [i_3])) ? (((((/* implicit */_Bool) var_11)) ? (arr_12 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3])))))));
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 11; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    {
                        var_22 = ((/* implicit */long long int) min((arr_11 [i_5]), (arr_11 [i_6])));
                        arr_21 [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_5] [i_5] [i_5] [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))) : (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_15 [i_4] [i_4] [i_4]))))))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 4; i_7 < 9; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) (-(((var_13) / (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5] [i_5] [i_5] [i_5] [i_5 + 1] [i_5])))))));
                            var_24 += ((short) ((((/* implicit */_Bool) arr_24 [i_7 + 3] [i_7 + 1] [i_7 + 3] [i_7 + 1] [i_7 + 1])) ? (arr_24 [i_7 + 3] [i_7 + 1] [i_7 + 3] [i_7 + 1] [i_7 + 1]) : (arr_24 [i_7 + 3] [i_7 + 1] [i_7 + 3] [i_7 + 1] [i_7 + 3])));
                        }
                    }
                } 
            } 
            var_25 = arr_20 [i_4] [i_4] [i_4] [i_4] [i_4];
            var_26 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_11 [i_4]), (((/* implicit */unsigned short) ((var_11) != (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_3])))))))))));
            var_27 = ((/* implicit */int) min((min((arr_20 [i_4] [i_4] [i_4] [i_3] [i_3]), (arr_20 [i_3] [i_3] [i_4] [i_3] [i_3]))), (((/* implicit */unsigned long long int) ((int) arr_20 [i_3] [i_3] [i_3] [i_3] [i_3])))));
        }
        arr_25 [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((long long int) var_13)), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_23 [i_3] [i_3])), (var_11)))))))));
        arr_26 [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_3] [i_3])) ? (var_13) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))))))));
    }
    for (short i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_27 [i_8])) != (((/* implicit */int) arr_27 [i_8]))))) - (min((((/* implicit */int) ((short) arr_27 [i_8]))), (min((1195816176), (((/* implicit */int) var_7))))))));
        /* LoopSeq 3 */
        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            var_29 = ((/* implicit */unsigned int) min((var_29), (4089724370U)));
            arr_33 [i_8] [i_8] = var_11;
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_10 = 3; i_10 < 14; i_10 += 1) 
            {
                var_30 = ((/* implicit */unsigned long long int) arr_31 [i_10]);
                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_35 [i_10] [i_10 - 3] [i_10 - 1]) : (arr_35 [i_10] [i_10 - 3] [i_10 - 3])));
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_34 [i_8] [i_8] [i_10 + 1])))))));
            }
            for (unsigned int i_11 = 2; i_11 < 13; i_11 += 4) 
            {
                arr_41 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) -1616422413720878094LL);
                arr_42 [i_8] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (min((((/* implicit */long long int) (short)8508)), (var_8)))))), (var_12)));
                var_33 = ((/* implicit */unsigned long long int) arr_36 [i_11] [i_11] [i_11] [i_11]);
            }
            var_34 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (arr_34 [i_9] [i_9] [i_9]) : (arr_34 [i_8] [i_8] [i_8]))) > (((((/* implicit */unsigned long long int) arr_37 [i_8] [i_8] [i_8])) / (arr_34 [i_9] [i_9] [i_9])))));
        }
        for (signed char i_12 = 1; i_12 < 14; i_12 += 4) 
        {
            arr_46 [i_8] = ((/* implicit */short) var_12);
            /* LoopSeq 1 */
            for (short i_13 = 0; i_13 < 15; i_13 += 2) 
            {
                var_35 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */unsigned long long int) ((1259274055508660083LL) ^ (((/* implicit */long long int) var_11))))) | (arr_34 [i_13] [i_12 - 1] [i_12 + 1])))));
                arr_49 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_29 [i_8])))), (((/* implicit */int) ((unsigned short) var_8)))));
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_13] [i_13] [i_13] [i_13])) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_37 [i_8] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))), (min((((/* implicit */unsigned long long int) arr_47 [i_8] [i_8] [i_8] [i_8])), (arr_34 [i_13] [i_13] [i_13]))))) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_28 [i_8])))), (((((/* implicit */_Bool) var_6)) ? (var_1) : (var_1))))))));
                arr_50 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29906))) : (arr_30 [i_8])))) * (((((/* implicit */_Bool) (unsigned char)97)) ? (arr_34 [i_13] [i_13] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) > (((/* implicit */unsigned long long int) min((arr_43 [i_12 - 1]), (arr_43 [i_12 - 1]))))));
            }
            arr_51 [i_12] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_9)))));
            var_37 = ((/* implicit */long long int) ((unsigned long long int) ((arr_27 [i_12 + 1]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_27 [i_12 + 1])))));
            var_38 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_47 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1])) + (((/* implicit */int) arr_47 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1]))))) != (min((min((((/* implicit */long long int) arr_30 [i_12])), (1616422413720878093LL))), (((/* implicit */long long int) var_9))))));
        }
        for (short i_14 = 1; i_14 < 14; i_14 += 3) 
        {
            var_39 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_29 [i_8])) != (var_9))))) / (((((/* implicit */unsigned long long int) var_10)) & (var_4)))));
            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((long long int) arr_28 [i_8])))));
        }
        arr_54 [i_8] [i_8] = ((((/* implicit */_Bool) ((arr_37 [i_8] [i_8] [i_8]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_8] [i_8] [i_8] [i_8])))))) ? (min((((/* implicit */long long int) ((unsigned short) var_7))), (min((((/* implicit */long long int) arr_48 [i_8] [i_8] [i_8] [i_8])), (-7678716468903005244LL))))) : (((/* implicit */long long int) (+(min((-560775868), (-151526039)))))));
    }
    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) 
    {
        arr_57 [i_15] = ((/* implicit */short) var_12);
        var_41 = ((/* implicit */short) min((((/* implicit */unsigned int) var_3)), (min((((unsigned int) arr_10 [i_15] [i_15])), (((/* implicit */unsigned int) ((arr_43 [i_15]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8532))))))))));
    }
    /* LoopSeq 2 */
    for (signed char i_16 = 0; i_16 < 15; i_16 += 2) 
    {
        var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((min((((/* implicit */unsigned int) ((int) arr_34 [i_16] [i_16] [i_16]))), (arr_30 [i_16]))) + (((/* implicit */unsigned int) arr_31 [i_16])))))));
        var_43 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) << (((1616422413720878073LL) - (1616422413720878061LL)))))), (var_4))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [i_16])))))));
        var_44 *= ((/* implicit */short) arr_59 [i_16] [i_16]);
        arr_61 [i_16] = ((/* implicit */signed char) (-(min((min((13053056579658621409ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_59 [i_16] [i_16])) : (7704631769392692578LL))))))));
    }
    for (unsigned long long int i_17 = 2; i_17 < 23; i_17 += 2) 
    {
        var_45 = ((/* implicit */short) var_2);
        arr_64 [i_17] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_17] [i_17 - 2])) ? (arr_62 [i_17 + 1]) : (((((((/* implicit */int) var_6)) + (2147483647))) >> (((arr_62 [i_17]) + (1932831260)))))))) && (((/* implicit */_Bool) arr_63 [i_17] [i_17])));
        /* LoopSeq 1 */
        for (short i_18 = 0; i_18 < 24; i_18 += 2) 
        {
            var_46 *= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((arr_66 [i_17] [i_17]), (((/* implicit */unsigned int) var_14))))))) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) min((arr_63 [i_18] [i_18]), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (var_13)))))))));
            arr_67 [i_18] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((var_6), (var_7)))) : (((int) arr_62 [i_17]))))));
            var_47 = ((/* implicit */short) min((((/* implicit */int) ((short) (unsigned short)11755))), (((((/* implicit */int) arr_63 [i_17 - 1] [i_17 - 2])) | (var_1)))));
            var_48 = ((/* implicit */short) arr_62 [i_17]);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_19 = 0; i_19 < 24; i_19 += 4) 
        {
            var_49 &= ((/* implicit */unsigned short) var_5);
            arr_70 [i_17] [i_17] [i_17] = ((/* implicit */signed char) (-(((/* implicit */int) ((var_8) >= (((/* implicit */long long int) -195742521)))))));
            var_50 -= ((/* implicit */int) ((var_4) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) arr_63 [i_17] [i_17]))))))));
            var_51 = ((/* implicit */short) (signed char)(-127 - 1));
            arr_71 [i_17] = ((/* implicit */short) ((((/* implicit */int) arr_69 [i_17])) | (((/* implicit */int) var_2))));
        }
    }
    /* LoopSeq 1 */
    for (short i_20 = 1; i_20 < 20; i_20 += 1) 
    {
        var_52 += arr_73 [2];
        /* LoopSeq 1 */
        for (long long int i_21 = 0; i_21 < 23; i_21 += 2) 
        {
            var_53 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) ((-1973113452) >= (var_9)))))));
            var_54 = ((/* implicit */_Bool) max((var_54), (((/* implicit */_Bool) var_14))));
        }
    }
}
