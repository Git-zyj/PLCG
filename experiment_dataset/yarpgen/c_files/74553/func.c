/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74553
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))));
                var_20 = ((/* implicit */short) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned char)96)))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) 4107368375U);
                                var_22 *= ((/* implicit */_Bool) max((((((((/* implicit */long long int) 4083020876U)) / (-2466573983488536559LL))) >> (((((/* implicit */int) (unsigned short)59727)) - (59708))))), (((/* implicit */long long int) max((3683967936U), (1286170489U))))));
                                var_23 = max((((var_0) ? (665943825U) : (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (2147483647)))));
                                var_24 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_9) : (4175822126U)))), (min((((/* implicit */unsigned long long int) max((3130219522U), (((/* implicit */unsigned int) var_18))))), (max((12995250458874781815ULL), (((/* implicit */unsigned long long int) var_0))))))));
                            }
                        } 
                    } 
                    arr_12 [i_2] = ((((3683967952U) * (0U))) ^ (max((((/* implicit */unsigned int) (short)32475)), (187598927U))));
                    var_25 = ((/* implicit */signed char) -2147483646);
                }
                arr_13 [0] = ((/* implicit */_Bool) (unsigned short)0);
                /* LoopSeq 4 */
                for (long long int i_5 = 3; i_5 < 11; i_5 += 2) 
                {
                    var_26 = ((/* implicit */unsigned short) max((min((max((var_12), (((/* implicit */long long int) 1420211182)))), (((/* implicit */long long int) (unsigned short)65524)))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((var_7) + (1601362603))))))));
                    var_27 |= ((/* implicit */unsigned short) ((max((2066904265U), (((/* implicit */unsigned int) var_17)))) != (min((((/* implicit */unsigned int) var_13)), (3U)))));
                    arr_18 [i_1] [(_Bool)1] [i_5] = ((/* implicit */unsigned int) (unsigned char)96);
                    arr_19 [i_0] [i_0] [i_5] = ((/* implicit */unsigned int) var_17);
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_22 [i_0] [i_6] [(short)10] = ((/* implicit */unsigned int) ((var_12) != (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65526)))))));
                    arr_23 [(_Bool)1] [i_1] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3683967976U))));
                    var_28 = ((((/* implicit */int) var_3)) == (262143));
                }
                for (unsigned int i_7 = 2; i_7 < 12; i_7 += 4) 
                {
                    arr_27 [i_0] [i_0] [10ULL] [i_7 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -4282337938309422526LL)) || (((/* implicit */_Bool) 1964213573U)))))) * (((var_15) - (3683967951U)))));
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_29 = min((((42883665U) << (((((((/* implicit */int) (unsigned short)65533)) & (var_7))) - (9527))))), (2U));
                        var_30 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((min((1048568U), (((/* implicit */unsigned int) (unsigned short)59498)))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0)))))))), (min((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)18)), (3683967913U)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)73))) / (-24LL)))))));
                    }
                    for (unsigned int i_9 = 4; i_9 < 11; i_9 += 4) 
                    {
                        arr_33 [i_0] [7U] [i_1 - 3] [i_7 - 2] [(unsigned short)1] [i_9] = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (signed char)6)), (1194813741U))) != (20U)))), (max((((/* implicit */unsigned char) var_5)), (var_10)))));
                        var_31 *= ((/* implicit */unsigned long long int) max((min((1113173599U), (((/* implicit */unsigned int) (unsigned short)38168)))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 3471982250U)) <= (-2368407572352058818LL))))) == (max((((/* implicit */long long int) 1387676373U)), (5061868194819068934LL))))))));
                        var_32 = ((586903242U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))));
                        var_33 = ((/* implicit */unsigned short) min(((+(var_12))), (((/* implicit */long long int) var_4))));
                        var_34 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) 0U)) ? (8064U) : (4294967289U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 67104768U)) || (var_0)))))) != (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62469)) << (((/* implicit */int) var_0))))), (((156988493U) * (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))));
                    }
                    arr_34 [(unsigned char)12] [i_1] [i_1 + 3] [i_1 - 3] = ((/* implicit */unsigned short) max((max((2368407572352058844LL), (((/* implicit */long long int) -1846637233)))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)0))))));
                    arr_35 [(signed char)14] [(signed char)14] [1LL] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-32)) || ((_Bool)0)))), (max((max((((/* implicit */long long int) var_11)), (var_8))), (((/* implicit */long long int) 1846637229))))));
                }
                /* vectorizable */
                for (short i_10 = 4; i_10 < 12; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 3; i_11 < 12; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 15; i_12 += 3) 
                        {
                            {
                                arr_45 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))));
                                arr_46 [i_0] [i_0] [i_11] [i_0] [(signed char)10] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)13);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 2; i_13 < 14; i_13 += 2) 
                    {
                        for (long long int i_14 = 0; i_14 < 15; i_14 += 1) 
                        {
                            {
                                var_35 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) >= (586903258U));
                                var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1113173606U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (586903242U)));
                                var_37 = ((/* implicit */unsigned short) 2983165054U);
                                arr_52 [i_0] [i_14] [i_10 - 4] [i_1] [(unsigned short)3] = ((/* implicit */int) 34359738367LL);
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) -2147483625)) * (511U)));
                }
            }
        } 
    } 
    var_39 = ((/* implicit */long long int) 3181793670U);
    /* LoopNest 3 */
    for (unsigned int i_15 = 0; i_15 < 16; i_15 += 4) 
    {
        for (unsigned long long int i_16 = 2; i_16 < 14; i_16 += 1) 
        {
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                {
                    arr_60 [(unsigned char)11] [2LL] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)22)) + (min((1982419362), (var_7)))))), (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7550459622905875602LL)))));
                    arr_61 [1U] [i_16 + 2] [i_16 + 1] [(unsigned short)12] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_9)) ? (4294967293U) : (var_9))), (((((/* implicit */_Bool) var_18)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523)))))));
                    var_40 = ((/* implicit */unsigned char) var_14);
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */unsigned int) ((34359738367LL) >= (((/* implicit */long long int) 948119251U))));
    var_42 = ((/* implicit */unsigned int) (_Bool)1);
}
