/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76430
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)13))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)32300)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)-28744))))) & (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (var_3)))))))));
    var_14 = ((/* implicit */_Bool) (+(((long long int) var_3))));
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_12)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                for (unsigned int i_3 = 2; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_11 [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 1] [i_3])) : (((/* implicit */int) var_12)))) >> (((arr_7 [i_3 - 1] [i_0 + 3]) - (1466993570U)))));
                        var_16 -= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))) != (var_0))))));
                        arr_12 [i_2] [i_1] [19LL] [i_1] [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (signed char)101))));
                    }
                } 
            } 
        } 
        arr_13 [i_0 + 3] = ((/* implicit */unsigned int) ((int) (~(375140112U))));
        var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))));
        arr_14 [i_0] [i_0] = ((/* implicit */int) ((((unsigned long long int) arr_0 [i_0])) < (((/* implicit */unsigned long long int) arr_10 [i_0 - 3]))));
        var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)29))))) & (((var_4) & (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    }
    for (unsigned char i_4 = 3; i_4 < 23; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            var_19 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_20 [i_5] [i_4] [i_4])))) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) arr_16 [i_4 - 1] [i_5]))))) & (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)219)) != (((/* implicit */int) (short)19506))))), ((+(1370940410U)))))));
            var_20 += ((/* implicit */unsigned char) (-((-(((((/* implicit */_Bool) var_10)) ? (arr_17 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_5]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) var_9)))))))), (((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5])) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)182)))) : (((/* implicit */int) (_Bool)1)))))))));
        }
        arr_22 [i_4] = ((/* implicit */unsigned short) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28745))) != (var_11))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_20 [i_4] [i_4] [i_4]) != (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4]))))))) : (max((-1788485228834486089LL), (((/* implicit */long long int) (unsigned char)14))))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_6 = 1; i_6 < 12; i_6 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            var_22 = ((/* implicit */long long int) max((var_22), (arr_21 [0ULL] [i_6] [0ULL])));
            arr_27 [i_6] [i_7] = ((long long int) arr_6 [i_6 + 2] [i_6] [i_6] [i_6]);
            arr_28 [i_6] = ((/* implicit */unsigned char) var_3);
            var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-28743))) ^ (arr_10 [i_7])));
        }
        /* LoopNest 3 */
        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                for (long long int i_10 = 2; i_10 < 12; i_10 += 2) 
                {
                    {
                        arr_37 [i_6] [i_8] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_5 [i_6 + 3] [i_6 + 2] [i_6 + 4]))) & (((arr_5 [i_6 + 3] [i_6] [i_6 + 4]) - (((/* implicit */int) (unsigned char)24))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 3; i_11 < 15; i_11 += 3) 
                        {
                            var_24 += ((/* implicit */long long int) (-(min((5813219211835586536ULL), (((/* implicit */unsigned long long int) (unsigned short)55513))))));
                            arr_40 [i_6] [i_6 + 1] [i_8] [i_9] [i_10 + 4] [i_11] = ((/* implicit */short) ((((arr_39 [i_11] [i_8] [i_8] [i_11 + 1] [i_11]) < (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_1))))) != (((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_20 [i_11] [i_11] [i_9]))))))) : (((unsigned int) arr_19 [i_11]))));
                            var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_31 [i_8] [i_11 - 2]))) == (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6 - 1] [i_6] [i_6 - 1] [i_6])))));
                            arr_41 [i_6] [i_11] [i_11] [i_6] [i_11 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_18 [i_11]), (((/* implicit */long long int) ((arr_35 [i_11] [i_10] [i_9] [i_8]) < (((/* implicit */long long int) ((/* implicit */int) arr_6 [15] [15] [15] [i_11 - 2]))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (unsigned short)55513)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_8] [i_9] [i_11]))))))) : (((/* implicit */int) var_12))));
                        }
                        var_26 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-20797)) ? (((/* implicit */int) arr_26 [i_9] [i_9])) : (((/* implicit */int) (short)-20801))))), (min((3899101386308796006ULL), (((/* implicit */unsigned long long int) var_9))))))) ? ((-(((((/* implicit */_Bool) 2028463579U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55513))) : (arr_33 [i_6 + 4] [i_9]))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_25 [i_6] [i_10] [i_9])) : (var_0)))));
                        var_27 = ((/* implicit */long long int) arr_25 [i_10] [i_9] [i_8]);
                    }
                } 
            } 
        } 
    }
    for (long long int i_12 = 2; i_12 < 22; i_12 += 3) 
    {
        var_28 -= ((/* implicit */_Bool) ((unsigned char) ((int) ((((/* implicit */int) (unsigned char)23)) & (((/* implicit */int) var_1))))));
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (var_3)))) ? (max((((/* implicit */long long int) ((signed char) var_7))), (max((((/* implicit */long long int) (signed char)47)), (arr_43 [7] [i_12]))))) : (((/* implicit */long long int) (((-(((/* implicit */int) arr_42 [i_12])))) - (((((/* implicit */int) (signed char)-20)) % (((/* implicit */int) (unsigned char)239)))))))));
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (signed char)-43))));
        /* LoopSeq 1 */
        for (int i_13 = 0; i_13 < 25; i_13 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 1; i_14 < 24; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 1; i_15 < 24; i_15 += 1) 
                {
                    {
                        var_31 *= ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (unsigned char)74)) <= (((/* implicit */int) (signed char)22)))));
                        var_32 = ((/* implicit */int) max((((unsigned long long int) min((var_3), (((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21662)) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_12] [i_12]))) : (var_4)))) ? (((/* implicit */long long int) -1571019445)) : (((long long int) arr_49 [i_12])))))));
                        arr_50 [i_12] [i_13] [i_14] [i_14 + 1] [i_15 - 1] |= ((/* implicit */long long int) var_12);
                    }
                } 
            } 
            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (((((~(7168499308211342913ULL))) == (((/* implicit */unsigned long long int) ((var_4) & (((/* implicit */long long int) arr_45 [i_12]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_45 [i_12 + 3])))) : (((((/* implicit */_Bool) (~(arr_47 [i_12])))) ? ((-(3563844092U))) : (3563844095U))))))));
            /* LoopNest 2 */
            for (long long int i_16 = 2; i_16 < 22; i_16 += 4) 
            {
                for (unsigned char i_17 = 0; i_17 < 25; i_17 += 1) 
                {
                    {
                        arr_58 [i_12] [i_12] [i_16] |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_12 + 2] [(unsigned short)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_12] [i_12] [i_12 + 3]))) : (7168499308211342909ULL)))) ? (((/* implicit */long long int) max((-1531226722), (((/* implicit */int) (unsigned char)235))))) : (-1519516830138463582LL)))));
                        var_34 += ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) ((_Bool) 12633524861873965079ULL))))) + (2147483647))) << (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_10)))));
                    }
                } 
            } 
        }
    }
}
